/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:10:08 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/16 15:54:16 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack *stack)
{
	int	temp;

	if (!stack || stack->next == NULL)
		return ;
	temp = stack->content;
	stack->content = stack->next->content;
	stack->next->content = temp;
}

void	sa(t_stack **stack_a)
{
	ft_swap(*stack_a);
}

void	sb(t_stack **stack_b)
{
	ft_swap(*swap_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(*stack_a);
	ft_swap(*swap_b);
}
