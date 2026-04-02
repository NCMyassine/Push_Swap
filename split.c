/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 22:49:30 by yabouzel          #+#    #+#             */
/*   Updated: 2026/04/02 01:43:28 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static char	*wrdscpy(char const *s, char c, int *ndx)
{
	int		i;
	char	*str;
	int		j;

	i = *ndx;
	j = 0;
	while (s[i] == c && s[i])
	{
		(*ndx)++;
		i++;
	}
	while (s[i] != c && s[i])
		i++;
	str = malloc(sizeof(char) *(i - *ndx + 1));
	if (!str)
		return (NULL);
	while (i > *ndx)
	{
		str[j] = s[*ndx];
		j++;
		(*ndx)++;
	}
	str[j] = '\0';
	return (str);
}

static size_t	counter(char const *s, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if ((s[i + 1] == '\0' || s[i + 1] == c) && s[i] != c)
			res++;
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		*ndx;
	size_t	j;

	i = 0;
	ndx = &i;
	j = 0;
	if (s == NULL)
		return (NULL);
	res = malloc((counter(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (counter(s, c) == 0)
		return (free(res), NULL);
	while (j < counter(s, c))
	{
		res[j] = wrdscpy(s, c, ndx);
		if (!res[j])
			return (freesplit(res), NULL);
		j++;
	}
	res[j] = NULL;
	return (res);
}
