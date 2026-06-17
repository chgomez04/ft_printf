/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:52:03 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/22 16:43:25 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	dest_len = 0;
	while (dest != NULL && dest_len < size && *(dest + dest_len) != '\0')
		dest_len++;
	src_len = 0;
	while (src != NULL && *(src + src_len) != '\0')
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (*(src + i) != '\0' && (dest_len + i) < (size - 1))
	{
		*(dest + dest_len + i) = *(src + i);
		i++;
	}
	*(dest + dest_len + i) = '\0';
	return (dest_len + src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[10] = "hola";
	const char	src[] = ", mundo";
	size_t	test;

	test = ft_strlcat(dest, src, 10);

	printf("test: %zu\n", test);
	printf("dest: %s:", dest);
	return (0);
}*/
