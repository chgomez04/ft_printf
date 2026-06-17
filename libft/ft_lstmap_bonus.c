/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 17:00:22 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/21 18:20:20 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	new_list = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
			return (ft_lstclear(&new_list, del), NULL);
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			return (ft_lstclear(&new_list, del), NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
#include <stdio.h>

// Función de transformación
void *duplicate_string(void *content)
{
    if (!content)
        return (NULL);
    return (ft_strdup((char *)content));
}

// Función para liberar contenido
void free_string(void *content)
{
    if (content)
        free(content);
}

int main(void)
{
    t_list *list = NULL;
    t_list *mapped_list;

    // Crear lista original
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("Hello")));
    ft_lstadd_back(&list, ft_lstnew(ft_strdup("World")));

    // Crear lista mapeada
    mapped_list = ft_lstmap(list, duplicate_string, free_string);

    // Imprimir resultados
    ft_lstiter(mapped_list, (void (*)(void *))puts);

    // Liberar memoria
    ft_lstclear(&list, free_string);
    ft_lstclear(&mapped_list, free_string);

    return (0);
}*/
