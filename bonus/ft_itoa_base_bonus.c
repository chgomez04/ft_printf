/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 17:27:15 by chgomez           #+#    #+#             */
/*   Updated: 2025/07/06 17:27:20 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itoa_base(unsigned long n, char *base)
{
	char	*str;
	int		len;
	int		base_len;

	base_len = ft_strlen(base);
	len = ft_numlen_base(n, base_len);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len-- != 0)
	{
		str[len] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
