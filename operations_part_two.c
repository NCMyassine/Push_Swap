/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_part_two.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 08:54:28 by marvin            #+#    #+#             */
/*   Updated: 2026/03/11 08:54:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void ra(t_node **a)
{
    rotate(a);
    write(1, "ra\n", 3);
}
void rb(t_node **b)
{
    rotate(b);
    write(1, "rb\n", 3);
}
void rr(t_node **a, t_node **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}
void rra(t_node **a)
{
    reverse_rotate(a);
    write(1, "rra\n", 4);
}
void rrb(t_node **b)
{
    reverse_rotate(b);
    write(1, "rrb\n", 4);
}