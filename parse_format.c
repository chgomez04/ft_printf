/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 17:31:01 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 15:02:53 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	parse_precision(const char **format, va_list args, t_format *fmt)
{
	if (**format == '.')
	{
		(*format)++;
		if (**format == '*')
		{
			fmt->precision = va_arg(args, int);
			(*format)++;
		}
		else
		{
			fmt->precision = 0;
			while (ft_isdigit(**format))
			{
				fmt->precision = (fmt->precision * 10) + (**format - '0');
				(*format)++;
			}
		}
	}
}

static void	parse_width(const char **format, va_list args, t_format *fmt)
{
	if (**format == '*')
	{
		fmt->width = va_arg(args, int);
		(*format)++;
	}
	else
	{
		fmt->width = 0;
		while (ft_isdigit(**format))
		{
			fmt->width = (fmt->width * 10) + (**format - '0');
			(*format)++;
		}
	}
}

static void	parse_flags(const char **format, t_format *fmt)
{
	while (**format)
	{
		if (**format == '0')
			fmt->zero = 1;
		else if (**format == '+')
			fmt->plus = 1;
		else if (**format == '-')
			fmt->minus = 1;
		else if (**format == '#')
			fmt->hash = 1;
		else if (**format == ' ')
			fmt->space = 1;
		else
			break ;
		(*format)++;
	}
}

static void	init_format(t_format *fmt)
{
	fmt->width = 0;
	fmt->precision = -1;
	fmt->zero = 0;
	fmt->minus = 0;
	fmt->plus = 0;
	fmt->space = 0;
	fmt->hash = 0;
}

int	parse_format(const char **format, va_list args)
{
	t_format	fmt;

	init_format(&fmt);
	parse_flags(format, &fmt);
	parse_width(format, args, &fmt);
	parse_precision(format, args, &fmt);
	return (dispatch_converter(args, fmt, **format));
}
