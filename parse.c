/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:50:29 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/03 01:00:48 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	freesplit(char **res)
{
	int	i;

	i = 0;
	while (res[i])
	{
        free(res[i]);
		i++;
	}
	free(res);
}
long	ft_atoi(const char *str)
{
	int sign;
	long res;

	res = 0;
	sign = 1;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	if(!(*str >= '0' && *str <= '9'))
		return (2147483649);
	while(*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - 48);
			if((sign == 1 && res > 2147483647) || (sign == -1 && res > 2147483648))
				return(2147483649);
			str++;
		}
		else
			return(2147483649);
	}
	return (res * sign);
}

t_node *checkandinsert(t_node **head, long number)
{
    t_node *ptr;
    t_node *newnode;
    
    if (number == 2147483649)
    return (NULL);
    ptr = *head;
    while (ptr)
    {
        if (ptr->data == number)
        return (NULL);
        ptr = ptr->next;
    }
    newnode = createnode(number);
    if (!newnode)
    return (NULL);
    addtostack(head, newnode);
    
    return (*head);
}
t_node *parser(char **arguments, t_node **head, int argc)
{
    char **tokens;
    t_node *tmp_head;
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        tokens = ft_split(arguments[i], ' ');
        if (tokens == NULL)
            return(freestack(head), NULL);
        j = 0;
        while (tokens[j])
        {
            tmp_head = checkandinsert(head, ft_atoi(tokens[j]));
            if (!tmp_head)
                return (freesplit(tokens), freestack(head), NULL);
            j++;
        }
        freesplit(tokens);
        i++;
    }
    return (*head);
}
