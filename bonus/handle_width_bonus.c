/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_width_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:53:18 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:53:24 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_width(int width, int len, int zero)
{
	int	count;

	count = 0;
	if (width <= len)
		return (0);
	while (width-- > len)
	{
		if (zero != 0)
			count += ft_putchar_count('0', 1);
		else
			count += ft_putchar_count(' ', 1);
	}
	return (count);
}
