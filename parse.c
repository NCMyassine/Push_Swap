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
    node *newnode;

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
node *parser(char **arguments, node **head, int argc)
{
    char **tokens;
    node *tmp_head;
    int i;
    int j;

    i = 1;
    while (i < argc)
    {
        tokens = ft_split(arguments[i], ' ');
        j = 0;
        while (tokens[j])
        {
            tmp_head = checkandinsert(head, ft_atoi(tokens[j]));
            if (!tmp_head)
            {
                freesplit(tokens);
                freestack(head);
                return (NULL);
            }
            j++;
        }
        freesplit(tokens);
        i++;
    }
    return (*head);
}
