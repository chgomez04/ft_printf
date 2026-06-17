/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:10:30 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:10:33 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	dest = (char *)ft_calloc(len, sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (*(s + i) != '\0')
	{
		*(dest + i) = *(s + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[] = "hola";
	char	*dup;

	dup = ft_strdup(x);
	printf("out: %s", dup);
	return (0);
}*/
