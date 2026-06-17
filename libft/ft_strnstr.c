/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:07:36 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:07:41 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*p_big;
	size_t		cont;
	size_t		limit;

	if (*little == '\0')
		return ((char *)big);
	limit = 0;
	while (*big != '\0' && limit < len)
	{
		p_big = big;
		cont = 0;
		while ((limit + cont) < len && *(p_big + cont) != '\0'
			&& *(little + cont) != '\0')
		{
			if (*(little + cont) != *(p_big + cont))
				break ;
			if (*(little + cont + 1) == '\0')
				return ((char *)big);
			cont++;
		}
		limit++;
		big++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	big[] = "hola chau chau chau";
	char	little[] = "";
	char	*test;

	test = ft_strnstr(big, little, 13);
	printf("out: %s", test);
	return (0);
}*/
