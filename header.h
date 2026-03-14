/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:50:00 by yabouzel          #+#    #+#             */
/*   Updated: 2026/02/28 00:08:13 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

typedef struct s_node
{
    int data;
    struct s_node* next;
    int index;
}   t_node;
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
t_node    *createnode(int token);
void    addtostack(t_node **head, t_node *newnode);
void    freestack(t_node **head);
void	freesplit(char **res);
t_node *checkandinsert(t_node **head, long number);
t_node *parser(char **arguments, t_node **head, int argc);
void    reverse_rotate(t_node **head);
void    rotate(t_node **head);
void    push(t_node **stack_src, t_node **stack_dest);
void    swap(t_node **head);
void sa(t_node **a);
void sb(t_node **b);
void ss(t_node **a, t_node **b);
void pa(t_node **a, t_node **b);
void pb(t_node **a, t_node **b);
void ra(t_node **a);
void rb(t_node **b);
void rr(t_node **a, t_node **b);
void rra(t_node **a);
void rrb(t_node **b);
void rrr(t_node **a, t_node **b);
void sort_index(t_node **stack_a);
int size_of_stack(t_node *stack);
#endif