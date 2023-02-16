/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:53:44 by rodas             #+#    #+#             */
/*   Updated: 2023/02/16 19:06:11 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>


typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}					t_stack;

//intput check, str to int 
int			ft_guccinput(int ac, char **av);
long int	ft_atol(char *av);

//moves
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
//swap
void 		pa(t_stack **stack_a, t_stack **stack_b);
void 		pb(t_stack **stack_a, t_stack **stack_b);
//rotate

// get the arguments
void		ft_getargs(int ac, char **av, t_stack **stack);

//lst utils, create new element of stack, get last add one to the back
t_stack		*ft_lstnew(int content);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_addback(t_stack **lst, t_stack *new);
void		ft_printlst(t_stack *lst);

#endif