/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:48:12 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 17:48:16 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*t_dest;
	const unsigned char	*t_src;

	t_dest = dest;
	t_src = src;
	if (t_dest < t_src)
	{
		while (n--)
		{
			*t_dest++ = *t_src++;
		}
	}
	else
	{
		t_dest = t_dest + n;
		t_src = t_src + n;
		while (n--)
		{
			*--t_dest = *--t_src;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char x[] = "hola";
	unsigned char	*test;

	printf("o: %s\n:", x);
	test = ft_memmove(&x[1], x, 3);
	printf("s: %s\n", test);
	return (0);
}*/
