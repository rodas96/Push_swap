/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:55:05 by rodas             #+#    #+#             */
/*   Updated: 2023/02/16 12:27:22 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] == '+') || str[i] == '-')
			i++;
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isdigit(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_number(av[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_dupe(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atol(av[i]) == ft_atol(av[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_limits(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_atol(av[i]) > INT_MAX || ft_atol(av[i]) < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

int	ft_guccinput(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ac == 1)
			exit(0);
		if (ft_isdigit(ac, av) == 1)
			return (1);
		if (ft_limits(ac, av) == 1)
			return (1);
		if (ft_dupe(ac, av) == 1)
			return (1);
		i++;
	}
	return (0);
}
