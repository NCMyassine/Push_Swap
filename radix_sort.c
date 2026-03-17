/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 22:43:30 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/17 03:33:00 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

void radix_sort(t_node **stack_a, t_node **stack_b)
{
    int size;
    int bits;
    int pass;
    int i;
    
    pass = 0;
    bits = 0;
    i = 0;
    if(sorted(stack_a))
        return ;
    size = size_of_stack(*stack_a);
    while (((size - 1) >> bits) != 0)
        bits++;
    while (pass < bits)
    {
        while(size - 1 > i)
        {
            if((((*stack_a)->index) >> pass) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            i++;
        }
        pass++;
        while(*stack_b != NULL)
            pa(stack_a, stack_b);
    }
}
