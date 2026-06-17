/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_precision_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:52:28 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:52:43 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_precision(char *str, int precision)
{
	int	len;
	int	count;

	len = ft_strlen(str);
	count = 0;
	if (precision > len)
	{
		count += ft_pad_char('0', precision - len);
	}
	else if (precision == 0 && str[0] == '0')
	{
		str[0] = '\0';
		return (0);
	}
	return (count);
}
