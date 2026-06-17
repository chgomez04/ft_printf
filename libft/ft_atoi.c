/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:08:35 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:08:37 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signo;
	int	number;

	signo = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			signo = -1;
		nptr++;
	}
	number = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = number * 10 + (int)(*nptr - '0');
		nptr++;
	}
	return (signo * number);
}
/*
#include <stdio.h>

int	main(void)
{
	int	number;
	char	x[] = "3.4";

	number = ft_atoi(x);
	printf("result: %d", number);
	return (0);
}*/
