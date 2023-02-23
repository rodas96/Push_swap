/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodas <rodas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:14:19 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/23 17:48:47 by rodas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//checks if stack is sorted returns 1 if not

int	is_sorted(t_stack **stack)
{
	t_stack	*temp;

	temp = (*stack);
	while (temp->next)
	{
		if (temp->content < temp->next->content)
		{
			temp = temp->next;
		}
		else 
			return (0);
	}
	return (1);
}

void	sort_everythingplz(int ac, t_stack **stack_a, t_stack **stack_b)
{
	if (ac == 3 && !is_sorted(stack_a))
		sa(stack_a);
	else if (ac == 4 && !is_sorted(stack_a))
		sort_3(stack_a);
	else if (ac == 5 && !is_sorted(stack_a))
		sort_4(stack_a, stack_b);
	else if (ac == 6  && !is_sorted(stack_a))
		sort_5(stack_a, stack_b);
}


