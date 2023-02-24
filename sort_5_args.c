/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:53:29 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/24 16:31:16 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int	lowestindex;

	lowestindex = find_lowestindex(stack_a);
	if (lowestindex <= 1)
	{
		while (lowestindex--)
			ra(stack_a);
	}
	else if (lowestindex <= 3)
	{
		while (lowestindex++ <= 3)
			rra(stack_a);
	}
	if (!is_sorted(stack_a))
	{
		pb(stack_a, stack_b);
		sort_3(stack_a);
		pa(stack_a, stack_b);
	}
}

void sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int lowestindex;

	lowestindex = find_lowestindex(stack_a);
	if (lowestindex <= 2)
	{
		while (lowestindex--)
			ra(stack_a);
	}
	else if (lowestindex <= 4)
	{
		while (lowestindex++ <= 4)
			rra(stack_a);
	}
	if (!is_sorted(stack_a))
	{
		pb(stack_a, stack_b);
		sort_4(stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}
