/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:53:44 by rodas             #+#    #+#             */
/*   Updated: 2023/02/17 20:11:51 by rmorais          ###   ########.fr       */
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

//moves swap
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
//push
void 		pa(t_stack **stack_a, t_stack **stack_b);
void 		pb(t_stack **stack_a, t_stack **stack_b);
//rotate
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
//reverse rotate
void rra(t_stack **stack_a);
void rrb(t_stack **stack_b);
void rrr(t_stack **stack_a, t_stack **stack_b);
// get the arguments
void		ft_getargs(int ac, char **av, t_stack **stack);

//sorting 
void	sort_3(t_stack **stack_a);

//lst utils, create new element of stack, get last add one to the back
t_stack		*ft_lstnew(int content);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_addback(t_stack **lst, t_stack *new);
void		ft_printlst(t_stack *lst);

#endif