/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 23:38:14 by yabouzel          #+#    #+#             */
/*   Updated: 2026/04/02 01:37:33 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	sorted(t_node **stack)
{
	t_node	*ptr;

	ptr = *stack;
	sort_index(stack);
	while (ptr && ptr->next)
	{
		if (ptr->index > ptr->next->index)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}

int	size_of_stack(t_node *stack)
{
	int		count;
	t_node	*ptr;

	ptr = stack;
	count = 0;
	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

void	sort_index(t_node **stack_a)
{
	int		index;
	t_node	*ptr;
	t_node	*ptr2;

	ptr = *stack_a;
	while (ptr)
	{
		index = 0;
		ptr2 = *stack_a;
		while (ptr2)
		{
			if (ptr->data > ptr2->data)
				index++;
			ptr2 = ptr2->next;
		}
		ptr->index = index;
		ptr = ptr->next;
	}
}

void	finalfree(t_node **stack_a, t_node **stack_b)
{
	freestack(stack_a);
	freestack(stack_b);
}
