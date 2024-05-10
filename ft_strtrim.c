/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 17:20:12 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/16 17:33:45 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	i = 0;
	while (s1[i] && ft_strchr(set, *(s1 + i)))
		i++;
	j = ft_strlen(s1) - 1;
	if (i > j)
		return (ft_strdup(""));
	while (s1[j] && ft_strchr(set, *(s1 + j)))
		j--;
	trimmed = ft_substr(s1, i, (size_t)(j - i + 1));
	return (trimmed);
}
