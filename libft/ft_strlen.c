/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:59:28 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 16:59:32 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (*(s + cont) != '\0')
		cont++;
	return (cont);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[] = "hola";
	char b[] = "a";
	char c[] = "";
	printf("valor: %zu\n", ft_strlen(a));
	printf("valor: %zu\n", ft_strlen(b));
	printf("valor: %zu\n", ft_strlen(c));
	return (0);
}*/
