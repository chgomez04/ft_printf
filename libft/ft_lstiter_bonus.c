/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:26:09 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/21 16:45:34 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>
#include <string.h>

// Función para imprimir contenido (ejemplo)
void print_content(void *content)
{
    if (content != NULL)
        printf("Contenido: %s\n", (char *)content);
}

int main(void)
{
    t_list *list = NULL;

    // Crear y añadir nodos a la lista
    ft_lstadd_back(&list, ft_lstnew(strdup("Primer nodo")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Segundo nodo")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Tercer nodo")));

    // Aplicar función a cada nodo
    ft_lstiter(list, print_content);

    // Liberar memoria (usando ft_lstclear)
    ft_lstclear(&list, free);

    return (0);
}*/
