/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:10:25 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 17:19:43 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*t_dest;
	const unsigned char	*t_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	t_dest = dest;
	t_src = src;
	while (n--)
	{
		*t_dest = *t_src;
		t_dest++;
		t_src++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char dest[50]= "hola";
	char y[] = " chau";
	unsigned char *test;

	printf("O: %s\n", dest);
	printf("d: %s\n", y);
	test = ft_memcpy(&dest[4], y, 5);
	printf("test: %s\n:", test);
	printf("s: %s\n", dest);
	return (0);
}*/
