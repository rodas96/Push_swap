/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:54:22 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/17 12:47:17 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// takes the 1st element of stack and put it on TOP of stack dest
static void	ft_push(t_stack **stack, t_stack **dest)
{
	t_stack	*temp;

	if (*stack == NULL)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = *dest;
	*dest = temp;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	ft_push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
