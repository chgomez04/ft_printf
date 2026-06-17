/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:12:33 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/19 18:12:37 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s_join;
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	s_join = (char *)malloc(total_len * sizeof(char));
	if (s_join == NULL)
		return (NULL);
	ft_memcpy(s_join, s1, s1_len);
	ft_memcpy(s_join + s1_len, s2, s2_len);
	*(s_join + s1_len + s2_len) = '\0';
	return (s_join);
}
