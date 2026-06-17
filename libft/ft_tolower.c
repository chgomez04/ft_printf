/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:00:32 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/22 16:47:33 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return ('a' + (c - 'A'));
	return (c);
}
/*
#include <stdio.h>

int     main(void)
{
        printf("i: %c", ft_toupper('1'));
        return (0);
}*/
