/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:09:17 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:09:20 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	total_size = nmemb * size;
	if (nmemb != 0 && (total_size / nmemb) != size)
		return (NULL);
	p = malloc(total_size);
	if (p != NULL)
	{
		p = ft_memset(p, 0, total_size);
	}
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*x;
	size_t	i;

	x = (char *)ft_calloc(5, sizeof(char));
	i = 0;
	while (i < 5)
	{
		printf("\nr:%c", *(x + i));
		i++;
	}
	return (0);
}*/
