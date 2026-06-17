/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:50:42 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/22 14:59:26 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (*(src + src_len) != '\0')
		src_len++;
	if (size == 0 || dst == NULL)
		return (src_len);
	i = 0;
	while (*(src + i) != '\0' && i < (size - 1))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hola, mundo!";
	char	dest[15];
	size_t	len;

	len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Destino: '%s'\n", dest);
    printf("Longitud de src: %zu\n", len);
    return (0);
}*/
