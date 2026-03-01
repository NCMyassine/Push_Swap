/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:50:29 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/01 01:46:09 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
char *verify(char *token)
{
    int i;
    
    i = 0;
    if (!(token[i] >= '0' && token[i] <= '9') || token[i] == )
    while (token[i])
    {
        if (!(token[i] >= '0' && token[i] <= '9'))
    }
}
int main(int argc, char **argv)
{
    int i;
    int j = 0;
    char **tokens;

    i = 1;
    while (i <= argc - 1)
    {
        tokens = ft_split(argv[i], ' ');
        while (tokens[j])
        {
            printf("%s\n", tokens[j]);
            j++;
        }
        i++;
    }
    return(0);
}