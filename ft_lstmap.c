/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:08:07 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/16 11:38:31 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;
	t_list	*loop;

	new = 0;
	loop = lst;
	while (loop)
	{
		node = malloc(sizeof(t_list));
		if (!node)
		{
			ft_lstclear(&new, del);
			return (0);
		}
		node->content = f(loop->content);
		node->next = NULL;
		ft_lstadd_back(&new, node);
		loop = loop->next;
	}
	return (new);
}
