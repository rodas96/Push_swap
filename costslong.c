/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   costslong.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:23:19 by rmorais           #+#    #+#             */
/*   Updated: 2023/03/04 23:32:06 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	absolutevalue(double a, double b)
{
	double	absvalue;

	if (a - b >= 0)
	{
		absvalue = a - b;
	}
	else
	{
		absvalue = -(a - b);
	}
	return (absvalue);
}

t_stack	*find_neigh(t_stack *s_a, t_stack *s_b)
{
	t_stack	*neighposition;
	double	diff;

	diff = 100000000000000;
	while (s_a)
	{
		if (absolutevalue(s_a->content, s_b->content) < diff
			&& s_a->content - s_b->content > 0)
		{
			diff = absolutevalue(s_a->content, s_b->content);
			neighposition = s_a;
		}
		s_a = s_a->next;
	}
	return (neighposition);
}
// sei um element do b que arranja o vizinho perfeito  no a
// meter os dois no TOPo para poder dar match

// returns the number of moves needed to move the elemen to TOP/BOTTOM
// keeps the position of the element in the list
int	find_element(t_stack **stack, t_stack *element)
{
	if (ft_lstsize(element) >= ft_lstsize(*stack) / 2)
	{
		element->listmiddle = TOP;
		return (ft_lstsize(*stack) - ft_lstsize(element));
	}
	else
	{
		element->listmiddle = BOTTOM;
		return (ft_lstsize(element));
	}
}

// if both elements are on TOP or BOTTOM 
// if elements are one on TOP and 1 at the BOTTOM we have to add both costs
int	pog_path(t_stack *s_a, t_stack *s_b, t_stack *element, t_stack *neigh)
{
	int	cost_a;
	int	cost_b;

	cost_a = find_element(&s_a, neigh);
	cost_b = find_element(&s_b, element);
	if (neigh->listmiddle == TOP && element->listmiddle == TOP)
	{
		if (cost_a >= cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	if (neigh->listmiddle == BOTTOM && element->listmiddle == BOTTOM)
	{
		if (cost_a >= cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	else
		return (cost_a + cost_b);
}

//neigh always stack a. elem stack b
t_stack	*couple_cost_min(t_stack **stack_a, t_stack **stack_b)
{
	int			cost;
	double		cost_min;
	t_stack		*eleposition;
	t_stack		*neighposition;
	t_stack		*tempb;

	eleposition = *stack_b;
	tempb = *stack_b;
	cost_min = 10000000000000;
	while (tempb)
	{
		neighposition = find_neigh(*stack_a, tempb);
		cost = pog_path(*stack_a, *stack_b, tempb, neighposition);
		if (cost < cost_min)
		{
			cost_min = cost;
			eleposition = tempb;
		}
		tempb = tempb->next;
	}
	return (eleposition);
}
