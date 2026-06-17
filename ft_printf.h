/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 13:07:21 by chgomez           #+#    #+#             */
/*   Updated: 2025/08/12 18:30:02 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_format
{
	int	width;
	int	precision;
	int	zero;
	int	minus;
	int	plus;
	int	space;
	int	hash;
}		t_format;

int		ft_printf(const char *format, ...);
int		parse_format(const char **format, va_list args);
int		dispatch_converter(va_list args, t_format fmt, char specifier);

int		convert_c(va_list args, t_format fmt);
int		convert_s(va_list args, t_format fmt);
int		convert_p(va_list args);
int		convert_di(va_list args, t_format fmt);
int		convert_u(va_list args, t_format fmt);
int		convert_x(va_list args, t_format fmt, char *base);
int		convert_percent(t_format fmt);

int		ft_numlen_base(unsigned long n, int base_len);
int		ft_pad_char(char c, int n);
int		ft_putchar_count(char c, int fd);
int		ft_putstr_count(char *s, int fd);
int		handle_precision(char *str, int precision);
int		handle_width(int width, int len, int zero);
char	*ft_itoa_base(unsigned long n, char *base);

#endif
