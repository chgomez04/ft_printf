/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:24:18 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:24:21 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	convert_p(va_list args)
{
	void	*ptr;
	char	*hex_str;
	int		count;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
		return (ft_putstr_count("(nil)", 1));
	hex_str = ft_itoa_base((unsigned long)ptr, "0123456789abcdef");
	if (hex_str == NULL)
		return (-1);
	count = 0;
	count += ft_putstr_count("0x", 1);
	count += ft_putstr_count(hex_str, 1);
	free(hex_str);
	return (count);
}
