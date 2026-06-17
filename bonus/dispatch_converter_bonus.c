/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dispatch_converter_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:26:46 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:26:49 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	dispatch_converter(va_list args, t_format fmt, char specifier)
{
	if (specifier == 'c')
		return (convert_c(args, fmt));
	else if (specifier == 's')
		return (convert_s(args, fmt));
	else if (specifier == 'p')
		return (convert_p(args));
	else if (specifier == 'd' || specifier == 'i')
		return (convert_di(args, fmt));
	else if (specifier == 'u')
		return (convert_u(args, fmt));
	else if (specifier == 'x')
		return (convert_x(args, fmt, "0123456789abcdef"));
	else if (specifier == 'X')
		return (convert_x(args, fmt, "0123456789ABCDEF"));
	else if (specifier == '%')
		return (convert_percent(fmt));
	else
		return (-1);
}
