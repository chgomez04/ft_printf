/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 20:34:26 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/21 16:11:05 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*list;

	if (lst == NULL || del == NULL || *lst == NULL)
		return ;
	list = *lst;
	while (list != NULL)
	{
		node = list->next;
		if (list->content != NULL)
			del(list->content);
		free(list);
		list = node;
	}
	*lst = NULL;
}
/*
#include <string.h>
#include <stdio.h>

// Función para liberar contenido
void del_string(void *content)
{
    if (content != NULL)
        free(content);
}

int main(void)
{
    t_list *list = NULL;
	printf("hola");
    // Crear lista
    ft_lstadd_back(&list, ft_lstnew(strdup("Nodo1")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Nodo2")));

    // Caso seguro - con función del
    ft_lstclear(&list, del_string);  // Correcto

    // Caso seguro - con NULL
    ft_lstclear(NULL, del_string);   // No hace nada
    ft_lstclear(&list, NULL);        // No hace nada

    return 0;
}*/
