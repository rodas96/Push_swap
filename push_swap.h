/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:53:44 by rodas             #+#    #+#             */
/*   Updated: 2023/03/01 20:04:47 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

# define 0 as top
# define 1 as bottom

typedef struct s_stack
{
	int				content;
	int				listmiddle;
	struct s_stack	*next;
}					t_stack;

double		media(t_stack *stack);
void		b4average_gob(t_stack **stack_a, t_stack **stack_b);
double		absolutevalue(int a, int b);
//returbs tge number of moves
int			ilike_tomoveit(t_stack **stack, t_stack *whereareubaby)
//returns the position of the best number to be on the side
t_stack		*find_neigh(t_stack *s_a, t_stack *s_b);
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
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
//reverse rotate
void 		rra(t_stack **stack_a);
void 		rrb(t_stack **stack_b);
void 		rrr(t_stack **stack_a, t_stack **stack_b);
// get the arguments
void		ft_getargs(int ac, char **av, t_stack **stack);

//find stuff
int			find_lowestindex(t_stack **stack);
void		smallest_go_tob(t_stack **stack_a, t_stack **stack_b);
void		get_a_empty(t_stack **stack_a, t_stack **stack_b);
void		get_b_empty(t_stack	**stack_a, t_stack **stack_b);

//sorting
int			is_sorted(t_stack **stack); //returns 1 if sorted Ou !is_sorted
void		sort_3(t_stack **stack_a);
void		sort_4(t_stack **stack_a, t_stack **stack_b);
void 		sort_5(t_stack **stack_a, t_stack **stack_b);
void		sort_everythingplz(int ac, t_stack **stack_a, t_stack **stack_b);
//lst utils, create new element of stack, get last add one to the back
t_stack		*ft_lstnew(int content);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_addback(t_stack **lst, t_stack *new);
void		ft_printlst(t_stack *lst);
int 		ft_lstsize(t_stack *stack);

#endif