/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pad_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 14:23:20 by chgomez           #+#    #+#             */
/*   Updated: 2025/06/17 14:30:25 by chgomez          ###   ########.fr       */
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
