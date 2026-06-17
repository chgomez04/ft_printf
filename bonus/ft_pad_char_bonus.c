/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_char_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:28:49 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:35:36 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pad_char(char c, int n)
{
	int	count;

	if (n <= 0)
		return (0);
	count = 0;
	while (n-- > 0)
	{
		if (write(1, &c, 1) == -1)
			return (-1);
		count++;
	}
	return (count);
}
