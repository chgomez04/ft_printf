/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_count_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:51:44 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:51:49 by chgomez          ###   ########.fr       */
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
