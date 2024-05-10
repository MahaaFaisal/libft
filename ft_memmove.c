/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:45:32 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/16 16:46:53 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dstbyte;
	const char		*srcbyte;
	size_t			i;

	dstbyte = dst;
	srcbyte = src;
	if (srcbyte < dstbyte && len > 0)
	{
		i = len - 1 ;
		while (i >= 0)
		{
			*(dstbyte + i) = *(srcbyte + i);
			if (i == 0)
				break ;
			i--;
		}
	}
	else if (dstbyte < srcbyte && len > 0)
	{
		ft_memcpy(dstbyte, srcbyte, len);
	}
	return (dst);
}
