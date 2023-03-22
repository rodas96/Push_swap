/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 12:25:31 by rmorais           #+#    #+#             */
/*   Updated: 2023/03/04 23:34:04 by rmorais          ###   ########.fr       */
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
	sort_everythingplz(ac, &stack_a, &stack_b);
	if (!is_sorted(&stack_a))
		reorganize_stack(&stack_a);
	printf("stackA\n");
	ft_printlst(stack_a);
	printf("stackB\n");
	ft_printlst(stack_b);
	ft_listfree(&stack_a);
	ft_listfree(&stack_b);
	return (0);
}
