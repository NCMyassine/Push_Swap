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
    t_node *ptr;

    i = 0;
    ptr = *head;
    if (ptr->next != NULL)
    {
        ptr = ptr->next;
        *head = ptr;

    }
}