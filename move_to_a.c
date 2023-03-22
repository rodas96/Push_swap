/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:37:27 by rmorais           #+#    #+#             */
/*   Updated: 2023/03/04 23:35:21 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	both_at_bottom(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	elem = couple_cost_min(stack_a, stack_b);
	neigh = find_neigh(*stack_a, elem);
	cost_a = find_element(stack_a, neigh);
	cost_b = find_element(stack_b, elem);
	while (cost_a > 0 && cost_b > 0)
	{
		rrr(stack_a, stack_b);
		cost_a--;
		cost_b--;
	}
	if (cost_a > 0)
		while (cost_a-- > 0)
			rra(stack_a);
	else if (cost_b > 0)
		while (cost_b-- > 0)
			rrb(stack_b);
}

static void	both_at_top(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	elem = couple_cost_min(stack_a, stack_b);
	neigh = find_neigh(*stack_a, elem);
	cost_a = find_element(stack_a, neigh);
	cost_b = find_element(stack_b, elem);
	while (cost_a > 0 && cost_b > 0)
	{
		rr(stack_a, stack_b);
		cost_a--;
		cost_b--;
	}
	if (cost_a > 0)
		while (cost_a-- > 0)
			ra(stack_a);
	else if (cost_b > 0)
		while (cost_b-- > 0)
			rb(stack_b);
}

static void	at_top(t_stack **stack_a, t_stack **stack_b, char which)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	elem = couple_cost_min(stack_a, stack_b);
	neigh = find_neigh(*stack_a, elem);
	cost_a = find_element(stack_a, neigh);
	cost_b = find_element(stack_b, elem);
	if (which == 'a')
		while (cost_a-- > 0)
			ra(stack_a);
	if (which == 'b')
		while (cost_b-- > 0)
			rb(stack_b);
}

static void	at_bottom(t_stack **stack_a, t_stack **stack_b, char which)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	elem = couple_cost_min(stack_a, stack_b);
	neigh = find_neigh(*stack_a, elem);
	cost_a = find_element(stack_a, neigh);
	cost_b = find_element(stack_b, elem);
	if (which == 'a')
		while (cost_a-- > 0)
			rra(stack_a);
	if (which == 'b')
		while (cost_b-- > 0)
			rrb(stack_b);
}

//send everything to a (if both are TOP/BOTTOM or w/e)
void	move_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*elem;
	t_stack	*neigh;

	elem = couple_cost_min(stack_a, stack_b);
	neigh = find_neigh(*stack_a, elem);
	if (elem->listmiddle == TOP && neigh->listmiddle == TOP)
		both_at_top(stack_a, stack_b);
	else if (elem->listmiddle == BOTTOM && neigh->listmiddle == BOTTOM)
		both_at_bottom(stack_a, stack_b);
	else if (elem->listmiddle == TOP && neigh->listmiddle == BOTTOM)
	{
		at_bottom(stack_a, stack_b, 'a');
		at_top(stack_a, stack_b, 'b');
	}
	else if (elem->listmiddle == BOTTOM && neigh->listmiddle == TOP)
	{
		at_bottom(stack_a, stack_b, 'b');
		at_top(stack_a, stack_b, 'a');
	}
	pa(stack_a, stack_b);
}

void	send_backtoa(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_b) > 0)
		move_to_b(stack_a, stack_b);
}

void	reorganize_stack(t_stack **stack_a)
{
	int	lowestindex;

	lowestindex = find_lowestindex(stack_a);
	if (lowestindex <= ft_lstsize(*stack_a) / 2)
	{
		while (lowestindex-- > 0)
			ra(stack_a);
	}
	else if (lowestindex > ft_lstsize(*stack_a) / 2)
	{
		lowestindex = ft_lstsize(*stack_a) - lowestindex;
		while (lowestindex-- > 0)
			rra(stack_a);
	}
}
