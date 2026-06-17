/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:03:22 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 17:03:25 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n-- > 0)
	{
		*p++ = (unsigned char)c;
	}
	return (s);
}
/*
#include <stdio.h>

int	main(void)
{
	char x[] = "hola chau";

	printf("oringin: %s\n",x);
	ft_memset(x, 'x', 5);
	printf("result: %s", x);
	return (0);
}*/
