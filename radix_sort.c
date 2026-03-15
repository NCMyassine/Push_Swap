/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 22:43:30 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/15 00:25:39 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"header.h"

void radix_sort(t_node **stack_a, t_node **stack_b)
{
    int size;
    int bits;
    int pass;
    
    pass = 0;
    size = size_of_stack(*stack_a);
    sort_index(*stack_a);
    while (((size - 1) >> bits) != 0)
        bits++;
    while (pass < bits)
    {
        while(*stack_a != NULL)
        {
            if((((*stack_a)->index) >> pass) & 1)
                ra(*stack_a);
            else
                pb(*stack_a, *stack_b);
        }
        while(stack_b != NULL)
            pa(*stack_a, *stack_b);
    }
}
