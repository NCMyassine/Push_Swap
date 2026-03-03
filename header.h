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

typedef struct node
{
    int data;
    struct node* next;
}node;
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);

#endif