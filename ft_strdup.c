/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:39:16 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/15 16:13:11 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	slen;

	slen = ft_strlen(s1);
	dup = malloc((slen + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s1, slen + 1);
	return (dup);
}
