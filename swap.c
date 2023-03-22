/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 13:10:08 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/17 12:48:05 by rmorais          ###   ########.fr       */
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
	write(1,"sa\n",3);
}

void	sb(t_stack **stack_b)
{
	ft_swap(*stack_b);
	write(1,"sb\n",3);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(*stack_a);
	ft_swap(*stack_b);
	write(1,"ss\n",3);
}
