/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 00:03:22 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/01 01:25:33 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

long	ft_atoi(const char *str)
{
	int sign;
	int res;

	res = 0;
	sign = 1;
	
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		if((sign == 1 && res > 2147483647) || (sign == -1 && res > 2147483648))
			return(2147483649);
		str++;
	}
	return (res * sign);
}
