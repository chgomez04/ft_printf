/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:05:32 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 17:05:35 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	aux;
	unsigned char	*p;

	aux = '\0';
	p = s;
	while (n--)
	{
		*p++ = aux;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	char x[] = "hola chau";

	printf("origin: %s\n", x);
	ft_bzero(&x[4], 5);
	printf("origin: %s\n", x);
	return (0);
}*/
