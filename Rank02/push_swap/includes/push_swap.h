/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 19:44:58 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 01:19:29 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Includes..:

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// Struct Define..:

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

//// Source Functions..:
/// Core Functions
// main.c		(1  static)
int			main(int argc, char *argv[]);
// check_input.c	(3 static)
int			check_input(char **argv);

/// Sort Algorithm
// s_sort.c		(1 static)
void		s_sort(t_stack **stack);
// f_sort		(2 static)
void		f_sort(t_stack **stack_a, t_stack **stack_b);

/// Utils Functions
// core_utils.c
t_stack		*get_stack(int argc, char **argv);
void		get_index(t_stack *stack_a, int stack_size);
void		get_cost(t_stack **stack_a, t_stack **stack_b);
void		do_cheap(t_stack **stack_a, t_stack **stack_b);
int			is_sorted(t_stack *stack);
// check_utils.c
int			nbstr_cmp(const char *s1, const char *s2);
int			is_digit(int c);
int			is_sign(int c);
// pos_utils.c		(2 static)
int			get_lowest_index_pos(t_stack **stack);
void		get_target_pos(t_stack **a, t_stack **b);
// stack_utils.c
t_stack		*stack_new(int value);
t_stack		*get_stack_bottom(t_stack *stack);
t_stack		*get_stack_before_bottom(t_stack *stack);
void		stack_add_bottom(t_stack **stack, t_stack *new);
int			get_stack_size(t_stack *stack);
// ft_utils.c
int			nb_abs(int nb);
void		exit_error(t_stack **stack_a, t_stack **stack_b);
void		free_stack(t_stack **stack);
void		ft_putstr(char *str);
long int	ft_atoi(const char *str);

/// Push_Swap Actions
// do_push.c	(1 static)
void		do_pa(t_stack **stack_a, t_stack **stack_b);
void		do_pb(t_stack **stack_a, t_stack **stack_b);
// do_swap.c	(1 static)
void		do_ss(t_stack **stack_a, t_stack **stack_b);
void		do_sa(t_stack **stack_a);
void		do_sb(t_stack **stack_b);
// do_rotate.c	(1 static)
void		do_rr(t_stack **stack_a, t_stack **stack_b);
void		do_ra(t_stack **stack_a);
void		do_rb(t_stack **stack_b);
// do_rev_rot.c	(1 static)
void		do_rrr(t_stack **stack_a, t_stack **stack_b);
void		do_rra(t_stack **stack_a);
void		do_rrb(t_stack **stack_b);
// big_moves.c	(4 static)
void		do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);

#endif
