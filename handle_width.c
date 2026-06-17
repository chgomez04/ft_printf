/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:38:57 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/05 12:48:47 by chgomez          ###   ########.fr       */
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
