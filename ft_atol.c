/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 17:15:17 by rodas             #+#    #+#             */
/*   Updated: 2023/02/15 15:42:18 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int ft_atol(char *av)
{
	int i;
	long int	result;
	long int	sign;

    i = 0;
    result = 0;
    sign = 1;
	if (av[i] == '+')
        i++;
	else if (av[i] == '-')
	{
        sign *= -1;
		i++;
	}
	while (av[i] != '\0' && av[i] >= '0' && av[i] <= '9')
	{
		result = (result * 10) + (av[i] - '0');
		i++;
	}
	return (result * sign);
}
