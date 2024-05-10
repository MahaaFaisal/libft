/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:08:41 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/16 11:07:09 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*todel;
	t_list	*aux;

	todel = *lst;
	while (todel)
	{
		aux = todel->next;
		ft_lstdelone(todel, del);
		todel = aux;
	}
	*lst = NULL;
	free(*lst);
}
