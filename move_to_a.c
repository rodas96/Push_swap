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

static	void both_at_bottom(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	neigh = find_neigh(*stack_a, *stack_b);
	elem = couple_cost_min(stack_a, stack_b);
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

static void both_at_top(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	neigh = find_neigh(*stack_a, *stack_b);
	elem = couple_cost_min(stack_a, stack_b);
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

static void at_top(t_stack **stack_a, t_stack **stack_b, char which)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	neigh = find_neigh(*stack_a, *stack_b);
	elem = couple_cost_min(stack_a, stack_b);
	cost_a = find_element(stack_a, neigh);
	cost_b = find_element(stack_b, elem);
	if (which == 'a')
		while (cost_a-- > 0)
			ra(stack_a);
	if (which == 'b')
		while (cost_b-- > 0)
			rb(stack_b);
}

static void at_bottom(t_stack **stack_a, t_stack **stack_b, char which)
{
	t_stack	*elem;
	t_stack	*neigh;
	int		cost_a;
	int		cost_b;

	neigh = find_neigh(*stack_a, *stack_b);
	elem = couple_cost_min(stack_a, stack_b);
	cost_a = find_element(stack_a, neigh);
	cost_b = find_element(stack_b, elem);
	if (which == 'a')
		while (cost_a-- > 0)
			rra(stack_a);
	if (which == 'b')
		while (cost_b-- > 0)
			rrb(stack_b);
}

//send everything to a (if both are top/bottom or w/e)
void	get_b_empty(t_stack **stack_a, t_stack **stack_b)
{
	printf("olaaaaaaa\n");
	t_stack	*elem;
	t_stack	*neigh;

	elem = couple_cost_min(stack_a, stack_b);
	neigh = find_neigh(*stack_a, elem);
	if (elem->listmiddle == top && neigh->listmiddle == top)
		both_at_top(stack_a, stack_b);
	else if (elem->listmiddle == bottom && neigh->listmiddle == bottom)
		both_at_bottom(stack_a, stack_b);
	else if (elem->listmiddle == top && neigh->listmiddle == bottom)
	{
		at_bottom(stack_a, stack_b, 'a');
		at_top(stack_a, stack_b, 'b');
	}
	else if (elem->listmiddle == bottom && neigh->listmiddle == top)
	{
		at_bottom(stack_a, stack_b, 'b');
		at_top(stack_a, stack_b, 'a');
	}
	printf("%d this is neigh\n", neigh->content);
	printf("%d this is elem\n",elem->content);
	printf("A\n");
	ft_printlst(*stack_a);
	printf("B\n");
	ft_printlst(*stack_b);
	pa(stack_a, stack_b);
}

void	send_everything_toA(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_lstsize(*stack_b) > 0)
		get_b_empty(stack_a, stack_b);
	//pa(stack_a, stack_b);
}

void reorganize_stack(t_stack **stack_a)
{
	int	lowestindex;

	lowestindex = find_lowestindex(stack_a);
	if (lowestindex <= ft_lstsize(*stack_a) / 2)
	{
		while (lowestindex--)
			ra(stack_a);
	}
	else if (lowestindex > ft_lstsize(*stack_a) / 2)
	{
		while (lowestindex--)
			rra(stack_a);
	}
}


