/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:53:44 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/09 00:36:33 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main(int argc, char **argv)
{
    t_node **stack_a;
    t_node **stack_b;

    if (argc == 1)
        return (0);
    stack_b = malloc(sizeof(t_node));
    stack_a = malloc(sizeof(t_node));
    if(parser(argv, stack_a, argc) == NULL)
        write(1, "error\n", 6);
    if (size_of_stack(*stack_a) == 2)
        sort2(stack_a);
    else if (size_of_stack(*stack_a) == 3)
        sort3(stack_a);
    else if (size_of_stack(*stack_a) == 5)
        sort5(stack_a, stack_b);
    else if (size_of_stack(*stack_a) > 5 || size_of_stack(*stack_a) == 4)
    {
        sort_index(stack_a);
        radix_sort(stack_a, stack_b);
    }
    freestack(stack_a);
    freestack(stack_b);
    return (0);
}
