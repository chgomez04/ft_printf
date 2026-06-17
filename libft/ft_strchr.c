/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:01:37 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:01:44 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{
		if (*p == (char)c)
			return (p);
		p++;
	}
	if (*p == '\0' && (char)c == '\0')
		return (p);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[] = "hola";
	printf("i: %s", x);
	printf("s: %s", ft_strchr(x, 'w'));
	return (0);
}*/
