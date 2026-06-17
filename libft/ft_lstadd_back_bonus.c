/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:26:23 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/20 18:53:59 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node_last;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node_last = ft_lstlast(*lst);
	node_last->next = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*test;
	t_list	*node3;

	list = NULL;
	node1 = ft_lstnew("hola");
	node2 = ft_lstnew(" mundo");
	ft_lstadd_front(&list, node2);
	ft_lstadd_front(&list, node1);
	test = ft_lstlast(list);
	printf("last_node: %s", (char *)test->content);
	node3 = ft_lstnew(" chau");
	ft_lstadd_back(&list, node3);
	while (list != NULL)
	{
		printf("%s", (char *)list->content);
		list = list->next;
	}
	return (0);
}*/
