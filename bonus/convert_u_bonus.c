/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:22:48 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:22:54 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_total(char *str, t_format fmt, unsigned int num)
{
	int	len;

	len = ft_strlen(str);
	if (fmt.precision == 0 && num == 0)
		return (0);
	if (fmt.precision > len)
		len = fmt.precision;
	return (len);
}

static int	print_number(char *str, t_format fmt, unsigned int num)
{
	int	count;

	count = 0;
	if (fmt.precision > (int)ft_strlen(str))
		count += ft_pad_char('0', fmt.precision - ft_strlen(str));
	if (!(fmt.precision == 0 && num == 0))
		count += ft_putstr_count(str, 1);
	return (count);
}

int	convert_u(va_list args, t_format fmt)
{
	unsigned int	num;
	char			*str;
	int				count;
	int				len;

	num = va_arg(args, unsigned int);
	str = ft_itoa_base(num, "0123456789");
	if (str == NULL)
		return (-1);
	len = len_total(str, fmt, num);
	count = 0;
	if (fmt.minus == 0 && fmt.width > len)
	{
		if (fmt.zero && fmt.precision == -1)
			count += ft_pad_char('0', fmt.width - len);
		else
			count += ft_pad_char(' ', fmt.width - len);
	}
	count += print_number(str, fmt, num);
	if (fmt.minus && fmt.width > len)
		count += ft_pad_char(' ', fmt.width - len);
	free(str);
	return (count);
}
