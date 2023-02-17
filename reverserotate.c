/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:01:20 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/17 15:41:42 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_reversing(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*lastelement;

	temp = *stack;
	lastelement = ft_lstlast(*stack);
	*stack = lastelement;
	(*stack)->next = temp;
	while (temp->next != *stack)
		temp = temp->next; //penultimo
	temp->next = NULL;
}

void rra(t_stack **stack_a)
{
	ft_reversing(stack_a);
	write(1,"rra\n",4);
}

void rrb(t_stack **stack_b)
{
	ft_reversing(stack_b);
	write(1,"rrb\n",4);
}

void rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_reversing(stack_a);
	ft_reversing(stack_b);
	write(1,"rrr\n",4);
}
