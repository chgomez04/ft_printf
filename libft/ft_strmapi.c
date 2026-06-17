/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 15:13:07 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/18 16:47:57 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*new;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new = (char *)malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = f((unsigned int)i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <stdio.h>

char    ft_mayuscula(unsigned int i, char c)
{
        (void)i;
        if (c >= 'a' && c <= 'z')
                return ('A' + (c - 'a'));
        return (c);
}

int	main(void)
{
	char	x[] = "hola243chau";

	printf("\nout: %s", ft_strmapi(x, ft_mayuscula));
	return (0);
}*/
