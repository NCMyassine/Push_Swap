/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion.c                                        :+:      :+:    :+:   */
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

    tmp = *head;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = newnode;
    newnode->next = NULL;
}