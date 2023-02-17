/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:25:31 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/17 20:12:12 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack *stack_b; 

	stack_a = NULL;
	stack_b = NULL;
	if (ft_guccinput(ac, av) == 1)
	{
		write(2, "error\n", 7);
		return (0);
	}
	ft_getargs(ac, av, &stack_a);
	ft_printlst(stack_a);
	ft_printlst(stack_b);
	sort_3(&stack_a);
	ft_printlst(stack_a);
	ft_printlst(stack_b);
	return (0);
}
