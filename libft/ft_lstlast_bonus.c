/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:49:47 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/20 18:23:19 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*test;

	list = NULL;
	node1 = ft_lstnew("hola");
	node2 = ft_lstnew(" mundo");
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	test = ft_lstlast(list);
	printf("last_node: %s", (char *)test->content);
	return (0);
}*/
