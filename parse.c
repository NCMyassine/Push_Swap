/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:50:29 by yabouzel          #+#    #+#             */
/*   Updated: 2026/02/28 01:11:26 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
char *verify(char **tokens)
{
    int i;
    
    i = 0;
    while (tokens[i] != NULL)
    {
        
    }
}
int main(int argc, char **argv)
{
    int i;
    char **tokens;

    i = 1;
    while (i <= argc - 1)
    {
        tokens = ft_split(argv[i], ' ');
        i++;
    }
    return(0);
}