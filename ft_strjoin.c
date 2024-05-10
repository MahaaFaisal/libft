/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:06:52 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/15 17:40:26 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len1;
	size_t	len2;
	size_t	newlen;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	newlen = len1 + len2;
	new = malloc((newlen + 1) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, newlen + 1);
	ft_strlcat(new, s2, newlen + 1);
	return (new);
}
