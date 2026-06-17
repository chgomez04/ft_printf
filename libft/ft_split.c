/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 17:00:14 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/16 20:09:21 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_row(char const *s, char c)
{
	size_t	row;

	row = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			row++;
			while (*s != c && *s != '\0')
				s++;
		}
		else
			s++;
	}
	return (row);
}

static char	**ft_free(char **str, size_t row)
{
	while (row > 0)
	{
		row--;
		free(str[row]);
	}
	free(str);
	return (NULL);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	column;

	column = 0;
	while (*s != c && *s != '\0')
	{
		column++;
		s++;
	}
	return (column);
}

static char	**ft_column(char const *s, char c)
{
	size_t	column;
	size_t	row;
	char	**str;

	str = (char **)malloc((ft_row(s, c) + 1) * (sizeof(char *)));
	if (str == NULL)
		return (NULL);
	row = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		column = ft_word_len(s, c);
		str[row] = (char *)malloc((column + 1) * sizeof(char));
		if (str[row] == NULL)
			return (ft_free(str, row));
		row++;
		s = s + column;
	}
	str[row] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	row;
	size_t	column;

	str = ft_column(s, c);
	row = 0;
	while (*s != '\0' && str != NULL)
	{
		if (*s != c)
		{
			column = 0;
			while (*s != c && *s != '\0')
			{
				*(str[row] + column) = *s;
				column++;
				s++;
			}
			*(str[row] + column) = '\0';
			row++;
		}
		else
			s++;
	}
	return (str);
}
/*
int	main(void)
{
	char	s[] = "*hola*********mundo*chau**********";
	char	c = '*';
	size_t	row;
	char	**str;

	str = ft_split(s, c);
	row = 0;
	while (str[row] != NULL)
	{
		printf("\n %s", str[row]);
		row++;
	}
	return (0);
}*/
