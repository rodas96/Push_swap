/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoutils1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:00:37 by rmorais           #+#    #+#             */
/*   Updated: 2023/03/01 20:13:05 by rmorais          ###   ########.fr       */
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
	while (ft_lstsize(*stack_a) > 3)
	{
		if ((*stack_a)->content < media(*stack_a))
			pb(stack_a, stack_b);
		else
			ra(stack_a);
	}
}
