/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:53:44 by rodas             #+#    #+#             */
/*   Updated: 2023/03/04 23:32:33 by rmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

# define top 0
# define bottom 1

typedef struct s_stack
{
	int				content;
	int				listmiddle;
	struct s_stack	*next;
}					t_stack;

//long utils
double		media(t_stack *stack);
void		b4average_gob(t_stack **stack_a, t_stack **stack_b);
double		absolutevalue(int a, int b);
int			find_lowestindex(t_stack **stack);

//finds best element in stacka with be stores his pos
t_stack		*find_neigh(t_stack *s_a, t_stack *s_b);
// returns the number of moves depending top/bot
int			find_element(t_stack **stack, t_stack *element);
//checks if both are top/bott rotating both saves a-b moves
int			pog_path(t_stack *s_a, t_stack *s_b, t_stack *element, t_stack *neigh);
//gets the a-b diff 
t_stack		*couple_cost_min(t_stack **stack_a, t_stack **stack_b);
//returbs tge number of moves needed to move the element
int			find_element(t_stack **stack, t_stack *element);
//returns the costs of moving a or b or both
int			pog_path(t_stack *s_a, t_stack *s_b, \
t_stack *element, t_stack *neigh);
// from a - b the pair with less cost to move
t_stack		*couple_cost_min(t_stack **stack_a, t_stack **stack_b);
//returns the position of the best number to be on the side
t_stack		*find_neigh(t_stack *s_a, t_stack *s_b);
// sends back to a
void		get_b_empty(t_stack **stack_a, t_stack **stack_b);
// after everything organize a
void reorganize_stack(t_stack **stack_a);

//find stuff
void		smallest_go_tob(t_stack **stack_a, t_stack **stack_b);
void		get_a_empty(t_stack **stack_a, t_stack **stack_b);


//intput checkutils
int			ft_guccinput(int ac, char **av);
long int	ft_atol(char *av);

//moves
void		sa(t_stack **stack_a);
void		sb(t_stack **stack_b);
void		ss(t_stack **stack_a, t_stack **stack_b);
void 		pa(t_stack **stack_a, t_stack **stack_b);
void 		pb(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack_b);
void		rr(t_stack **stack_a, t_stack **stack_b);
void 		rra(t_stack **stack_a);
void 		rrb(t_stack **stack_b);
void 		rrr(t_stack **stack_a, t_stack **stack_b);
// get the arguments
void		ft_getargs(int ac, char **av, t_stack **stack);
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