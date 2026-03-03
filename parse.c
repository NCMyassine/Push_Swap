/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 23:50:29 by yabouzel          #+#    #+#             */
/*   Updated: 2026/03/03 01:00:48 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
char *verify(char **tokens)
{
    int i;
    int words;

    words = 0;
    i = 0;
    while (tokens[words])
    {
        if (!(tokens[words][i] >= '0' && tokens[words][i] <= '9') && !(tokens[words][i] == '-' || tokens[words][i] == '+'))
            return("error");
        i++;
        while (tokens[words][i])
        {
            if (!(tokens[words][i] >= '0' && tokens[words][i] <= '9'))
                return("error");
            i++;
        }
        i = 0;
        words++;
    }
    return("all good");
}
int main(int argc, char **argv)
{
    int i;
    int j = 0;
    char **tokens;
    char *validation;

    i = 1;
    while (i <= argc - 1)
    {
        tokens = ft_split(argv[i], ' ');
        i++;
    }
    validation = verify(tokens);
    printf("%s\n", validation);
    return(0);
}
