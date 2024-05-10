/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:58:44 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/16 16:44:07 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*dstbyte;

	if (!dst && !src)
		return (NULL);
	dstbyte = dst;
	i = 0;
	while (i < n)
	{
		*(dstbyte + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}
