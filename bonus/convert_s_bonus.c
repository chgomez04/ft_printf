/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:21:22 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:21:29 by chgomez          ###   ########.fr       */
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
