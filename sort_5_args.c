/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:53:29 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/22 20:39:14 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int ft_lstsize(t_stack *stack)
{
	int	count;

	count = 0;
	if (!stack)
		return (0);
	while (stack != NULL)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}

int	find_lowest(t_stack **stack)
{
	t_stack	*temp;
	int	lowest;
	int	i;

	temp = *stack;
	lowest = (*stack)->content;
	while (temp)
	{
		if (temp->content < lowest)
		{
			lowest = temp->content;
			temp->lowest = lowest;
		}
		i++;
		temp = temp->next;
	}
	return (i);
}
 
void sort_5(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_lstsize(*stack_a) == 5)
	{
		while ((*stack_a)->content > (*stack_a)->lowest)
		{
			if (find_lowest(stack_a) <= 2)
				ra(stack_a);
			else if (find_lowest(stack_a) > 2)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		ft_printlst(*stack_b);
	}
	if (ft_lstsize(*stack_a) == 4)
	{
		while ((*stack_a)->content > (*stack_a)->lowest)
		{
			if (find_lowest(stack_a) <= 1)
				ra(stack_a);
			else if (find_lowest(stack_a) > 1)
				rra(stack_a);
		}
		pb(stack_a, stack_b);
		ft_printlst(*stack_b);
	}
	sort_3(stack_a);
	pa(stack_a, stack_b);
}
