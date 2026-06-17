/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:02:55 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:02:59 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*p != '\0')
	{
		p++;
	}
	while (p >= (char *)s)
	{
		if (*p == (char)c)
			return (p);
		p--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	x[] = "hooooola chau";

	printf("i: %s", x);
	printf("o: %s", ft_strrchr(x, 'o'));
	return (0);
}*/
