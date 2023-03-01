/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algolongutils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:23:19 by rmorais           #+#    #+#             */
/*   Updated: 2023/03/01 20:26:29 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	absolutevalue(int a, int b)
{
	double absvalue;

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
	double diff;

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
// meter os dois no topo para poder dar match


int	ilike_tomoveit(t_stack **stack, t_stack *whereareubaby)
{
	if (ft_lstsize(whereareubaby) > ft_lstsize(*stack) / 2)
	{
		whereareubaby->listmiddle = 0;
		return (ft_lstsize(whereareubaby) - ft_lstsize(*stack) / 2);
	}
	else
	{
		whereareubaby->listmiddle = 1;
		return (ft_lstsize(whereubaby));
	}
}

int	yolo_path(t_stack *s_a, t_stack *s_b, t_stack *element, t_stack *neigh)
{
	int	cost_a;
	int cost_b;

	cost_a = ilike_tomoveit(&s_a, neigh);
	cost_b = ilike_tomoveit(&s_b, element);
	if (s_a->listmiddle == top && s_b->listmiddle == top)
	{
		if (cost_a >= cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	if (s_a->listmiddle == bottom && s_b->listmiddle == bottom)
	{
		if (cost_a >= cost_b)
			return (cost_a);
		else
			return (cost_b);
	}
	else
		return (cost_a + cost_b);
}
