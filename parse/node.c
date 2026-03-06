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

node    *createnode(int token)
{
    node *newnode;

    newnode = malloc(sizeof(node));
    if (!newnode)
        return(newnode);
    newnode->data = token;
    newnode->next = NULL;
    return(newnode);
}

void    addtostack(node **head, node *newnode)
{
    node *tmp;

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
void    freestack(node **head)
{
    node *tmp;
    node *ptr;

    if(*head == NULL)
        return ;
    ptr = *head;
    while (ptr->next != NULL)
    {
        tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
    free(ptr);
    *head = NULL;
}