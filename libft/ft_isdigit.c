/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 16:49:53 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 19:20:57 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("valor: %d", ft_isdigit('0'));
	printf("valor: %d", ft_isdigit('9'));
	printf("valor: %d", ft_isdigit('6'));
	printf("valor: %d", ft_isdigit('@'));
	return (0);
}*/
