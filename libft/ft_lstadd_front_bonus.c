/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:41:31 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/20 17:27:42 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*list;
	t_list	*nodo1;
	t_list	*nodo2;

	list = NULL;
	nodo1 = ft_lstnew("hola");
	nodo2 = ft_lstnew(" mundo");

	ft_lstadd_front(&list, nodo2);
	ft_lstadd_front(&list, nodo1);

	while (list != NULL)
	{
		printf("%s",(char *) list->content);
		list = list->next;
	}
	return (0);
}*/
