/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_precision.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 12:56:36 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/05 12:56:40 by chgomez          ###   ########.fr       */
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
