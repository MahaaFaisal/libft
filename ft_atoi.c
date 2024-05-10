/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafaisal <mafaisal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 10:41:21 by mafaisal          #+#    #+#             */
/*   Updated: 2023/11/16 17:20:41 by mafaisal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

static int	isneglong(long num, char c, int sign)
{
	if (sign == -1
		&& (num > 922337203685477580
			|| (num == 922337203685477580 && (c - '0') > 8)))
		return (-1);
	else
		return (0);
}

static int	isposlong(long num, char c, int sign)
{
	if (sign == 1
		&& (num > 922337203685477580
			|| (num == 922337203685477580 && (c - '0') > 7)))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	while (is_space(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (str[i] != '\0' && ft_isdigit(str[i]))
	{
		if (isposlong(result, str[i], sign))
			return (-1);
		else if (isneglong(result, str[i], sign))
			return (0);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
