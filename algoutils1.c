/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoutils1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:00:37 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/24 19:38:08 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	media(t_stack *stack)
{
	double	soma;
	int count;

	soma = 0;
	count = 0;
	while (stack)
	{
		soma += stack->content;
		count++;
		stack = stack->next;
	}
	return (soma / count);
}

void	b4average_gob(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_a) > 1)
	{
		if ((*stack_a)->content < media(*stack_a))
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
}
/* 
int	*find_neigh(t_stack *stack_a, t_stack *stack_b)
{
	double diff;
	int	b;

	b = stack_b->content;
	diff = 100000000000000;
	while (stack_a)
	{
		if (stack_a->content - b < diff && stack_a->content - b > 0)
		{
			diff = stack_a->content - b;
		}
		stack_a = stack_a->next;
	}
	return (&stack_a->content);
} */