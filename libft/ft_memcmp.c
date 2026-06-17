/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:06:33 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:06:45 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n)
	{
		if (*(p1 + i) != *(p2 + i))
		{
			return (*(p1 + i) - *(p2 + i));
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[] = "hola";
	char	y[] = "hol";

	printf("\nout: %d", ft_memcmp(x, y, 3));
	printf("\nout: %d", ft_memcmp(x, y, 4));
	return (0);
}*/
