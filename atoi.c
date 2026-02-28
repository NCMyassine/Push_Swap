/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 00:03:22 by yabouzel          #+#    #+#             */
/*   Updated: 2026/02/28 01:23:25 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_atoi(const char *str)
{
	int sign;
	int res;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (sign == 1 && ((res > INT_MAX / 10)
				|| (res == INT_MAX / 10 && *str - 48 > 7)))
			return (-1);
		if (sign == -1 && ((res > INT_MAX / 10)
				|| (res == INT_MAX / 10 && *str - 48 > 8)))
			return (0);
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * sign);
}