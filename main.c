/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:25:31 by rmorais           #+#    #+#             */
/*   Updated: 2023/02/24 19:36:58 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b; 

	stack_a = NULL;
	stack_b = NULL;
	if (ft_guccinput(ac, av) == 1)
	{
		write(2, "error\n", 7);
		return (0);
	}
	ft_getargs(ac, av, &stack_a);
	printf("stackA\n");
	ft_printlst(stack_a);
	printf("stackB\n");
	ft_printlst(stack_b);
	//smallest_go_tob(&stack_a, &stack_b);
	//sort_everythingplz(ac, &stack_a, &stack_b);
	//get_a_empty(&stack_a, &stack_b);
	//sort_5(&stack_a, &stack_b);
	//get_b_empty(&stack_a, &stack_b);
	printf("%ls", find_neigh(stack_a, stack_b));
	printf("stackA\n");
	ft_printlst(stack_a);
	printf("stackB\n");
	ft_printlst(stack_b);
	return (0);
}
