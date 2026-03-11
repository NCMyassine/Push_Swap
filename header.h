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
    struct node* next;
}   t_node;
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
t_node    *createnode(int token);
void    addtostack(t_node **head, t_node *newnode);
void    freestack(t_node **head);
void	freesplit(char **res);
t_node *checkandinsert(t_node **head, long number);
t_node *parser(char **arguments, t_node **head, int argc);

#endif