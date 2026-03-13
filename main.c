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
    t_node **head = malloc(sizeof(t_node));
    t_node *res;
    if (argc == 1)
        return (0);
    *head = NULL;
    res = parser(argv, head, argc);
    if (res == NULL)
        return(printf("error\n"), 0);
    if (res == *head)
        return(printf("all good\n"), 0);
    else
        return(printf("fin ghadii\n"), 0);
}