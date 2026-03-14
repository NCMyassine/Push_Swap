/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 01:02:10 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/03 01:03:38 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_node    *createnode(int token)
{
    t_node *newnode;

    newnode = malloc(sizeof(t_node));
    if (!newnode)
        return(newnode);
    newnode->data = token;
    newnode->index = 0;
    newnode->next = NULL;
    return(newnode);
}

void    addtostack(t_node **head, t_node *newnode)
{
    t_node *tmp;

    if (!*head)
        *head = newnode;
    else 
    {
        tmp = *head;
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = newnode;
    }
}
void freestack(t_node **head)
{
    t_node *tmp;

    while (*head)
    {
        tmp = *head;
        *head = (*head)->next;
        free(tmp);
    }
}