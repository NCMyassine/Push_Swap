/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 05:55:07 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/15 08:56:44 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sort2(t_node **stack_a)
{
    if ((*stack_a)->data > (*stack_a)->next->data)
        sa(*stack_a);
    return ;
}
void sort3(t_node **stack_a)
{
    t_node *scnd;
    t_node *thrd;
    
    scnd = (*stack_a)->next;
    thrd = scnd->next;
    if ((*stack_a) > scnd && (*stack_a) < thrd)
        return (sa(*stack_a));
    if ((*stack_a) > scnd && scnd > thrd)
        return(sa(*stack_a), rra(*stack_a));
    if ((*stack_a) > scnd && thrd > scnd && (*stack_a) > thrd)
        return(ra(*stack_a));
    if ((*stack_a) < scnd && scnd > thrd)
        return(sa(*stack_a), ra(*stack_a));
    if ((*stack_a) < scnd && (*stack_a) > thrd)
        return(rra(*stack_a));
    return ;
}

void sort5(t_node **stack_a,t_node **stack_b)
{
    t_node *ptr;
    
    ptr = *stack_a;
    sort_index(*stack_a);
    while(ptr)
    {
        if ((ptr->index == 0) && (ptr->index = 1))
            pb(ptr, *stack_b);
    }
    sort3(*stack_a);
}