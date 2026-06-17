/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chgomez <chgomez@student.42barcelona.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 19:44:59 by chgomez           #+#    #+#             */
/*   Updated: 2025/05/20 20:33:01 by chgomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	if (lst->content != NULL)
		del(lst->content);
	free(lst);
}
/*
#include <stdio.h>
#include <string.h>

void	ft_delcontent(void *content)
{
	if (content != NULL)
		free(content);
}

int	main(void)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	node->content = (char *)malloc(5*sizeof(char));
	if (node->content == NULL)
		printf("error...");
	strcpy(node->content, "hola");
	node->next = NULL;
	printf("content: %s", (char *)node->content);
	ft_lstdelone(node, ft_delcontent);
	if (node->content != NULL)
		printf("free...");
	//printf("content: %s", (char *)node->content);
	return (0);
}*/
