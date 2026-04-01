/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 05:55:07 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/31 21:33:17 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sort2(t_node **stack_a)
{
    sa(stack_a);
    return ;
}
void sort3(t_node **stack_a)
{
    int frst;
    int scnd;
    int thrd;
    
    frst = (*stack_a)->data;
    scnd = (*stack_a)->next->data;
    thrd = (*stack_a)->next->next->data;
    if (frst > scnd && frst < thrd)
        return (sa(stack_a));
    if (frst > scnd && scnd > thrd)
        return(sa(stack_a), rra(stack_a));
    if (frst > scnd && thrd > scnd && frst > thrd)
        return(ra(stack_a));
    if (frst < scnd && scnd > thrd && frst < thrd)
        return(sa(stack_a), ra(stack_a));
    if (frst < scnd && frst > thrd)
        return(rra(stack_a));
    return ;
}
void sort4(t_node **stack_a, t_node **stack_b)
{
     while(size_of_stack(*stack_a) != 3)
    {
        if (((*stack_a)->index == 0))
            pb(stack_a, stack_b);
        else
            ra(stack_a);
    }
    sort3(stack_a);
    pa(stack_a, stack_b);
}
void sort5(t_node **stack_a, t_node **stack_b)
{
    while(size_of_stack(*stack_a) != 3)
    {
        if (((*stack_a)->index == 0) || ((*stack_a)->index == 1))
            pb(stack_a, stack_b);
        else
            ra(stack_a);
    }
    sort3(stack_a);
    if ((*stack_b)->index < (*stack_b)->next->index)
        sb(stack_b);
    pa(stack_a, stack_b);
    pa(stack_a, stack_b);
}
