/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 15:54:22 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/16 16:01:31 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

static void	ft_push(t_stack *stack, t_stack *dest)
{
	int temp;

	temp = stack->content;
	stack->content = dest;
	dest = temp;
	stack = dest;
}

void pa(t_stack **stack_a)
{
	ft_push(*stack_a);
}
