/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_functions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 19:30:29 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/17 01:09:50 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    swap(t_node **head)
{
    t_node *node_b;
    t_node *node_a;

    node_a = *head;
    if (*head == NULL || node_a->next == NULL)
        return ;
    node_b = node_a->next;
    node_a->next = node_b->next;
    node_b->next = *head;
    *head = node_b;
}
void    push(t_node **stack_src, t_node **stack_dest)
{
    t_node *tmp;

    if (*stack_src == NULL)
        return ;
    if (stack_dest == NULL)
    {
        tmp = *stack_src;
        *stack_src = tmp->next;
        *stack_dest = tmp;  
    }
    else
    {
        tmp = *stack_src;
        *stack_src = tmp->next;
        tmp->next = *stack_dest; 
        *stack_dest = tmp;
    }
}
void    rotate(t_node **head)
{
    t_node *first;
    t_node *last;

    if (*head == NULL || (*head)->next == NULL)
        return ;
    first = *head;
    *head = first->next;
    last = *head;
    while (last->next != NULL)
        last = last->next;
    last->next = first;
    first->next = NULL;
}
void    reverse_rotate(t_node **head)
{
    t_node *before_last;
    t_node *last;

    if (*head == NULL || (*head)->next == NULL)
        return ;
    last = *head;
    while (last->next != NULL)
        last = last->next;
    before_last = *head;
    while (before_last->next != last)
        before_last = before_last->next;
    last->next = *head;
    *head = last;
    before_last->next = NULL;
}
void rrr(t_node **a, t_node **b)
{
    reverse_rotate(a);
    reverse_rotate(b);
    write(1, "rrr\n", 4);
}