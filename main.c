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
    t_node *res;

    if (argc == 1)
        return (0);
    stack_a = malloc(sizeof(t_node));
    if(parser(argv, stack_a, argc) == NULL)
        return(write(1, "error\n", 6));
    if (argc == 3)
        return(sort2(stack_a));
}
