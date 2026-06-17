/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 18:03:14 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 13:21:53 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	num_len(long num, t_format fmt)
{
	int	len;

	if (num < 0)
		len = ft_numlen_base(-num, 10);
	else
		len = ft_numlen_base(num, 10);
	if (fmt.precision > len)
		len = fmt.precision;
	if (num < 0 || fmt.plus != 0 || fmt.space != 0)
		len++;
	return (len);
}

static int	handle_sign(long num, t_format fmt)
{
	int	count;

	count = 0;
	if (num < 0)
		count += ft_putchar_count('-', 1);
	else if (fmt.plus != 0)
		count += ft_putchar_count('+', 1);
	else if (fmt.space != 0)
		count += ft_putchar_count(' ', 1);
	return (count);
}

static int	handle_number(long num, t_format fmt)
{
	int		count;
	char	*str;

	count = 0;
	if (num < 0)
		str = ft_itoa_base(-num, "0123456789");
	else
		str = ft_itoa_base(num, "0123456789");
	if (fmt.precision == 0 && num == 0)
		str[0] = '\0';
	else if (fmt.precision > 0)
		count += handle_precision(str, fmt.precision);
	count += ft_putstr_count(str, 1);
	free(str);
	return (count);
}

static int	ft_auxiliar(t_format fmt, long num, int len)
{
	int	count;

	count = 0;
	if (fmt.zero != 0 && fmt.precision == -1)
	{
		count += handle_sign(num, fmt);
		count += handle_width(fmt.width, len, 1);
	}
	else
	{
		count += handle_width(fmt.width, len, 0);
		count += handle_sign(num, fmt);
	}
	count += handle_number(num, fmt);
	return (count);
}

int	convert_di(va_list args, t_format fmt)
{
	long	num;
	int		count;
	int		len;

	num = va_arg(args, int);
	len = num_len(num, fmt);
	count = 0;
	if (fmt.minus != 0)
	{
		count += handle_sign(num, fmt);
		count += handle_number(num, fmt);
		count += handle_width(fmt.width, len, 0);
	}
	else
	{
		count += ft_auxiliar(fmt, num, len);
	}
	return (count);
}
