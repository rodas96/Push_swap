/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodas <rodas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:53:29 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/23 17:48:45 by rodas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	find_lowestindex(t_stack **stack)
{
	t_stack	*temp;
	int		index;
	int		lowest;
	
	index = 0;
	temp = *stack;
	lowest = (*stack)->content;
	while (*stack)
	{
		if ((*stack)->content < lowest)
		{
			lowest = (*stack)->content;
		}
		(*stack) = (*stack)->next;
	}
	(*stack) = temp;
	while ((*stack) && lowest != (*stack)->content)
	{
		(*stack) = (*stack)->next;
		index++;
	}
	(*stack) = temp;
	return (index);
}

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
