/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_part_one.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 08:43:33 by marvin            #+#    #+#             */
/*   Updated: 2026/03/11 08:43:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void sa(t_node **a)
{
    swap(a);
    write(1, "sa\n", 3);
}
void sb(t_node **b)
{
    swap(b);
    write(1, "sb\n", 3);
}
void ss(t_node **a, t_node **b)
{
    swap(a);
    swap(b);
    write(1, "ss\n", 3);
}
void pa(t_node **a, t_node **b)
{
    push(b, a);
    write(1, "pa\n", 3);
}
void pb(t_node **a, t_node **b)
{
    push(a, b);
    write(1, "pb\n", 3);
}