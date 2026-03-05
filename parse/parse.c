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
char *verifier(char **tokens)
{
    int i;
    int words;

    words = 0;
    i = 0;
    if(tokens == NULL)
        return(NULL);
    while (tokens[words])
    {
        if (!(tokens[words][i] >= '0' && tokens[words][i] <= '9') && !(tokens[words][i] == '-' || tokens[words][i] == '+'))
            return(NULL);
        i++;
        while (tokens[words][i])
        {
            if (!(tokens[words][i] >= '0' && tokens[words][i] <= '9'))
                return(NULL);
            i++;
        }
        i = 0;
        words++;
    }
    return("all good");
}
node *checkandinsert(node **head, int number)
{
    int i;
    node *ptr;
    node *tmp;

    i = 0;
    ptr = *head;
    while (ptr->next != NULL)
    {
        if(ptr->data == number)
            return(NULL);
        ptr = ptr->next;
    }
    tmp = ptr;
    ptr = createnode(number);
    addtostack(head, ptr);
    return(ptr);
}
char *parser(char **arguments, node **head)
{
    char **tokens;
    char *signal;
    int number;
    int i;
    int j;

    i = 0;
    while(arguments[i] != NULL)
    {
        tokens = ft_split(arguments[i], ' ');
        signal = verifier(tokens);
        if (signal != NULL)
        {
            while(tokens[j] != NULL)
            {
                number = atoi(tokens[j++]);
                if(checkandinsert(head, number) == NULL)
                    return(NULL);
            }
        }
        else
            return(NULL);
        i++;
    }
}
