/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 20:00:25 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/05 19:50:11 by chgomez          ###   ########.fr       */
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
			count += ft_putchar_count(' ', 1);
	}
	count += ft_putchar_count(c, 1);
	if (fmt.width > 1 && fmt.minus != 0)
	{
		while (fmt.width-- > 1)
			count += ft_putchar_count(' ', 1);
	}
	return (count);
}
