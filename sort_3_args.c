/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3_args.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 15:42:06 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/17 20:31:17 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **stack_a)
{	
	int first;
	int second;
	int	third;

	first = (*stack_a)->content;
	second = (*stack_a)->next->content;
	third = (*stack_a)->next->next->content;
	printf ("%d %d %d\n",first, second, third);
	if (first > second && second > third)
	{
		sa(stack_a);
		rra(stack_a);
	}
	if (first > second && second < third)
		sa(stack_a);
	if (first > second && second < third)
		ra(stack_a);
}