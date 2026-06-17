/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 19:28:45 by chgomez           #+#    #+#             */
/*   Updated: 2025/06/16 19:29:36 by chgomez          ###   ########.fr       */
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
