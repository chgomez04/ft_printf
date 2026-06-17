/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_percent_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:25:55 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:25:59 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_percent(t_format fmt)
{
	int	count;
	int	len;

	len = 1;
	count = 0;
	if (fmt.minus == 0 && fmt.width > len)
	{
		if (fmt.zero != 0)
			count += ft_pad_char('0', fmt.width - len);
		else
			count += ft_pad_char(' ', fmt.width - len);
	}
	count += ft_putchar_count('%', 1);
	if (fmt.minus != 0 && fmt.width > len)
		count += ft_pad_char(' ', fmt.width - len);
	return (count);
}
