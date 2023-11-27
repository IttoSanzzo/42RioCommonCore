/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   f_sort.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 23:47:50 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 00:11:28 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

static void	push_but_three(t_stack **stack_a, t_stack stack_b)
{
	int	stack_size;
	int	pushed;
	int	i;

	stack_stack = get_stack_size(*stack_a);
	pushed = 0;
	i = -1;
	while (stack_size > 6 && --i < stack_size && pushed < stack_size / 2)
	{
		if ((*stack_a)->index <= stack_size / 2 && ++pushed)
			do_pb(stack_a, stack_b);
		else
			do_ra(stack_a);
	}
	while (stack_size - pushed++ > 3)
		do_pb(stack_a, stack_b);
}

static void	f_shift(t_stack **stack_a)
{
	int	lowest_pos;
	int	stack_size;

	stack_size = get_stack_size(*stack_a);
	lowest_pos = get_lowest_index_position(stack_a);
	if (lowest_pos > stack_size / 2)
		while (lowest_pos++ < stack_size)
			do_rra(stack_a);
	else
		while (lowest_pos-- > 0)
			do_ra(stack_a);
}

void	f_sort(t_stack **stack_a, t_stack **stack_b)
{
	push_but_three(stack_a, stack_b);
	s_sort(stack_a);
	while (*stack_b)
	{
		get_tpos(stack_a, stack_b);
		get_cost(stack_a, stack_b);
		do_cheap(stack_a, stack_b);
	}
	if (!is_sorted(*stack_a))
		f_shift(stack_a);
}
