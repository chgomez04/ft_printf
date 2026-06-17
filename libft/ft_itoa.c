/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 20:32:10 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/17 19:01:00 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = (int)(n / 10);
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	number;
	char	*str;
	int		len;

	len = ft_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	number = (long)n;
	if (n == 0)
		*str = '0';
	else if (n < 0)
	{
		*str = '-';
		number = -number;
	}
	str[len] = '\0';
	len = len - 1;
	while (number > 0)
	{
		str[len--] = '0' + (number % 10);
		number = (long)(number / 10);
	}
	return (str);
}
/*
int	main(void)
{
	int	n = 654321;
	int	n1 = 0;
	int	n2 = -123456;
	int	n3 = -2147483648;

	printf("\nt1: %s", ft_itoa(n));
	printf("\nt1: %s", ft_itoa(n1));
	printf("\nt1: %s", ft_itoa(n2));
	printf("\nt1: %s", ft_itoa(n3));
	return (0);
}*/
