/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_part_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 07:12:10 by marvin            #+#    #+#             */
/*   Updated: 2026/03/09 07:12:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_node *swap(t_node **head)
{
    int i;
    t_node *tmp;
    t_node *node_b;
    t_node *node_a;

    node_b = *head;
    if (node_b->next != NULL)
    {
        node_b = node_b->next;
        tmp = *head;
        *head = node_b;
    }
}