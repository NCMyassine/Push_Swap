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
node *checkandinsert(node **head, long number)
{
    node *ptr;

    if (number == 2147483649)
        return(NULL);
    if (*head == NULL)
    {
        *head = createnode(number);
        return(*head);
    }
    ptr = *head;
    while (ptr->next != NULL)
    {
        if(ptr->data == number)
            return(NULL);
        ptr = ptr->next;
    }
    if(ptr->data == number)
        return(NULL);
    ptr = createnode(number);
    addtostack(head, ptr);
    return(*head);
}
node *parser(char **arguments, node **head)
{
    char **tokens;
    node *tmp_head;
    int j;
    int i;

    i = 0;
    j = 0;
    while(arguments[i] != NULL)
    {
        tokens = ft_split(arguments[i], ' ');
        while(tokens[j] != NULL)
        {
            tmp_head = checkandinsert(head, ft_atoi((tokens[j++])));
            if(tmp_head == NULL)
                return(freestack(head), NULL);
        }
        freesplit(tokens);
    }
    return(*head);
}
