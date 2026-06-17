/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 12:30:10 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/05 12:12:14 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			count;
	const char	*ptr;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = 0;
	ptr = format;
	while (*ptr != '\0')
	{
		if (*ptr == '%')
		{
			ptr++;
			count += parse_format(&ptr, args);
		}
		else
			count += ft_putchar_count(*ptr, 1);
		ptr++;
	}
	va_end(args);
	return (count);
}
