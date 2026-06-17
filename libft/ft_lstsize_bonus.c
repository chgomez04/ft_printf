/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:29:08 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/20 17:46:39 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	if (lst == NULL)
		return (0);
	len = 0;
	while (lst != NULL)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;

	list = NULL;
	node1 = ft_lstnew("hola");
	node2 = ft_lstnew(" mundo");

	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);

	printf("\nlen:%d ", ft_lstsize(list));
	return (0);
}*/
