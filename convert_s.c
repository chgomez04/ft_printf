/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:31:06 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 12:30:50 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_s(va_list args, t_format fmt)
{
	char	*str;
	int		count;
	int		len;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	if (fmt.precision >= 0 && fmt.precision < len)
		len = fmt.precision;
	count = 0;
	if (fmt.minus == 0 && fmt.width > len)
	{
		while (fmt.width-- > len)
			count += ft_putchar_count(' ', 1);
	}
	count += write(1, str, len);
	if (fmt.minus != 0 && fmt.width > len)
	{
		while (fmt.width-- > len)
			count += ft_putchar_count(' ', 1);
	}
	return (count);
}
