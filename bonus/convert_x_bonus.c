/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:04:56 by chgomez           #+#    #+#             */
/*   Updated: 2025/08/13 15:05:01 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_total(char *str, t_format fmt, unsigned int num)
{
	int	len;

	len = ft_strlen(str);
	if (fmt.hash != 0 && num != 0)
		len += 2;
	if (fmt.precision > (int)ft_strlen(str))
		len += (fmt.precision - ft_strlen(str));
	return (len);
}

static int	ft_print_init_i(t_format fmt, unsigned int num, const char *base)
{
	int	count;

	count = 0;
	if (fmt.hash != 0 && num != 0)
	{
		if (ft_strncmp(base, "0123456789abcdef", 16) == 0)
			count += ft_putstr_count("0x", 1);
		else
			count += ft_putstr_count("0X", 1);
	}
	return (count);
}

static int	ft_print_init_ii(t_format fmt, char *str, int len)
{
	int	count;

	count = 0;
	if (fmt.precision > (int)ft_strlen(str))
		count += ft_pad_char('0', fmt.precision - ft_strlen(str));
	count += ft_putstr_count(str, 1);
	if (fmt.minus != 0 && fmt.width > len)
		count += ft_pad_char(' ', fmt.width - len);
	return (count);
}

int	convert_x(va_list args, t_format fmt, char *base)
{
	unsigned int	num;
	char			*str;
	int				count;
	int				len;

	num = va_arg(args, unsigned int);
	if (num == 0 && fmt.hash != 0)
		fmt.hash = 0;
	str = ft_itoa_base(num, base);
	if (str == NULL)
		return (-1);
	len = len_total(str, fmt, num);
	count = 0;
	if (fmt.minus == 0 && fmt.width > len)
	{
		if (fmt.zero != 0 && fmt.precision == -1 && fmt.hash == 0)
			count += ft_pad_char('0', fmt.width - len);
		else
			count += ft_pad_char(' ', fmt.width - len);
	}
	count += ft_print_init_i(fmt, num, base);
	count += ft_print_init_ii(fmt, str, len);
	free(str);
	return (count);
}
