/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:18:29 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/05 12:34:44 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_count(char *s, int fd)
{
	int	count;

	if (s == NULL)
		return (ft_putstr_count("(null)", fd));
	count = 0;
	while (*s != '\0')
	{
		if (ft_putchar_count(*s, fd) == -1)
			return (-1);
		count++;
		s++;
	}
	return (count);
}
