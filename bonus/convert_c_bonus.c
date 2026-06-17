/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:19:28 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:19:40 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_c(va_list args, t_format fmt)
{
	char	c;
	int		count;

	count = 0;
	c = (char)va_arg(args, int);
	if (fmt.width > 1 && fmt.minus == 0)
	{
		while (fmt.width-- > 1)
		{
			if (fmt.zero == '0')
				count += ft_putchar_count('0', 1);
			else if (fmt.zero == ' ')
				count += ft_putchar_count(' ', 1);
		}
	}
	count += ft_putchar_count(c, 1);
	if (fmt.width > 1 && fmt.minus != 0)
	{
		while (fmt.width-- > 1)
			count += ft_putchar_count(' ', 1);
	}
	return (count);
}
