/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listutils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 18:58:38 by rodas             #+#    #+#             */
/*   Updated: 2023/03/04 16:03:32 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_lstsize(t_stack *stack)
{
	int	count;

	count = 0;
	if (!stack)
		return (0);
	while (stack != NULL)
	{
		stack = stack->next;
		count++;
	}
	return (count);
}


t_stack	*ft_lstnew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	return (ft_lstlast(lst->next));
}

void	ft_addback(t_stack **lst, t_stack *new)
{
	t_stack	*lastnode;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	lastnode = ft_lstlast(*lst);
	lastnode->next = new;
}

void ft_printlst(t_stack *lst)
{
	t_stack *temp;

	temp = lst;
	while (lst != NULL)
	{
		printf("[%d] ", lst->content);
		lst = lst->next;
	}
	printf("\n");
	lst = temp;
}
/* 
int main()
{
	t_stack *a;
	t_stack	*b;

	a = malloc(sizeof(t_stack));
	b = malloc(sizeof(t_stack));
	a = ft_lstnew(124);
	b = ft_lstnew(567);
	printf("%d\n", a->content);
	a->next = b;
	printf("%d", a->next->content);	
} */
