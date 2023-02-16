/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:30:02 by rodas             #+#    #+#             */
/*   Updated: 2023/02/16 12:25:27 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_getargs(int ac, char **av, t_stack **stack)
{
	int i;

    i = 1;
	while (i < ac)
	{
		ft_addback(stack, ft_lstnew(ft_atol(av[i])));
		i++;
	}
}
