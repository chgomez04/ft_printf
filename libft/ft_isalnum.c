/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:50:58 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 19:19:30 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("valor: %d", ft_isalnum('a'));
	printf("valor: %d", ft_isalnum('A'));
	printf("valor: %d", ft_isalnum('Z'));
	printf("valor: %d", ft_isalnum('z'));
	printf("valor: %d", ft_isalnum('m'));
	printf("valor: %d", ft_isalnum('T'));
	printf("valor: %d", ft_isalnum('8'));
	printf("valor: %d", ft_isalnum(' '));
	return (0);
}*/
