/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodas <rodas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:42:06 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/23 17:48:48 by rodas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void do_sa_rra(t_stack **stack_a)
{
	sa(stack_a);
	rra(stack_a);
}

static void do_sa_ra(t_stack **stack_a)
{
	sa(stack_a);
	ra(stack_a);
}

void	sort_3(t_stack **stack_a)
{	
	int first;
	int second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	if (first < third && second < third)
		sa(stack_a);
	else if (first > second && second > third)
		do_sa_rra(stack_a);
	else if (first > third && second < third)
		ra(stack_a);
	else if (first < second && second > third && first < third)
		do_sa_ra(stack_a);
	else if (first < second && first > third)
		rra(stack_a);
}
