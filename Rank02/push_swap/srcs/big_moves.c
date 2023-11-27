/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   big_moves.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/27 00:34:41 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 00:53:44 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

static void	do_rr_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a < 0 && *cost_b < 0)
	{
		(*cost_a)++;
		(*cost_b)++;
		do_rrr(a, b);
	}
}

static void	do_r_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b)
{
	while (*cost_a > 0 && *cost_b > 0)
	{
		(*cost_a)--;
		(*cost_b)--;
		do_rrr(a, b);
	}
}

static void	do_r_a(t_stack **stack_a, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			do_ra(stack_a);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			do_rra(stack_a);
			(*cost)++;
		}
	}
}

static void	do_r_b(t_stack **stack_b, int *cost)
{
	while (*cost)
	{
		if (*cost > 0)
		{
			do_rb(stack_b);
			(*cost)--;
		}
		else if (*cost < 0)
		{
			do_rrb(stack_b);
			(*cost)++;
		}
	}
}

void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b)
{
	if (cost_a < 0 && cost_b < 0)
		do_rr_both(a, b, &cost_a, &cost_b);
	else if (cost_a > 0 && cost_b > 0)
		do_r_both(a, b, &cost_a, &cost_b);
	do_r_a(a, &cost_a);
	do_r_b(b, &cost_b);
	do_pa(a, b);
}
