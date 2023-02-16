/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:27:51 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/16 19:18:58 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_rotate(t_stack **stack_a)
{
	t_stack	*temp;
	t_stack	*lastelement;

	temp = *stack;
	*stack = (*stack)->next;
	lastelement = ft_lstlast(*stack_a)
}