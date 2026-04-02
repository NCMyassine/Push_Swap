/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabouzel <yabouzel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 20:53:44 by yabouzel          #+#    #+#             */
/*   Updated: 2026/04/02 01:32:22 by yabouzel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	init(t_node **stack_a, t_node **stack_b)
{
	*stack_a = NULL;
	*stack_b = NULL;
}

int	main(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	if (argc == 1)
		return (0);
	init(&stack_a, &stack_b);
	if (parser(argv, &stack_a, argc) == NULL)
		write(1, "error\n", 6);
	if (sorted(&stack_a))
		return (finalfree(&stack_a, &stack_b), 0);
	if (size_of_stack(stack_a) == 2)
		sort2(&stack_a);
	else if (size_of_stack(stack_a) == 3)
		sort3(&stack_a);
	else if (size_of_stack(stack_a) == 4)
		sort4(&stack_a, &stack_b);
	else if (size_of_stack(stack_a) == 5)
		sort5(&stack_a, &stack_b);
	else if (size_of_stack(stack_a) > 5)
		radix_sort(&stack_a, &stack_b);
	finalfree(&stack_a, &stack_b);
	return (0);
}
