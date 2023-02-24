/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 11:46:01 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/24 17:30:02 by rmorais          ###   ########.fr       */
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

void	smallest_go_tob(t_stack **stack_a,t_stack **stack_b)
{
	int	lowestindex;

	lowestindex = find_lowestindex(stack_a);
	if (lowestindex <= ft_lstsize(*stack_a) / 2)
	{
		while (lowestindex--)
			ra(stack_a);
	}
	else/* if (lowestindex > ft_lstsize(*stack_a) / 2) */
	{
		while (lowestindex++ < ft_lstsize(*stack_a))
			rra(stack_a);
	}
	pb(stack_a, stack_b);
}

void	get_a_empty(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_a) > 3)
	{
		smallest_go_tob(stack_a, stack_b);
	}
	if (!is_sorted(stack_a))
		sort_3(stack_a);
}

void	get_b_empty(t_stack	**stack_a, t_stack **stack_b)
{
	while (*stack_b)
	{
		pa(stack_a, stack_b);
	}
}