/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   pos_utils.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/27 00:55:49 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 02:28:14 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "push_swap.h"

static void	get_pos(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	tmp = *stack;
	i = 0;
	while (tmp)
	{
		tmp->pos = i;
		tmp = tmp->next;
		i++;
	}
}

int	get_lowest_index_pos(t_stack **stack)
{
	int		lowest_index;
	int		lowest_pos;
	t_stack	*tmp;

	tmp = *stack;
	lowest_index = INT_MAX;
	get_pos(stack);
	lowest_pos = tmp->pos;
	while (tmp)
	{
		if (tmp->index < lowest_index)
		{
			lowest_index = tmp->index;
			lowest_pos = tmp->pos;
		}
		tmp = tmp->next;
	}
	return (lowest_pos);
}

static int	get_target(t_stack **a, int b_idx, int trgt_idx, int trgt_pos)
{
	t_stack	*tmp_a;

	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index > b_idx && tmp_a->index < trgt_idx)
		{
			trgt_idx = tmp_a->index;
			trgt_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	if (trgt_idx != INT_MAX)
		return (trgt_pos);
	tmp_a = *a;
	while (tmp_a)
	{
		if (tmp_a->index < trgt_idx)
		{
			trgt_idx = tmp_a->index;
			trgt_pos = tmp_a->pos;
		}
		tmp_a = tmp_a->next;
	}
	return (trgt_pos);
}

void	get_tpos(t_stack **a, t_stack **b)
{
	int		target_pos;
	t_stack	*tmp_b;

	tmp_b = *b;
	get_pos(a);
	get_pos(b);
	target_pos = 0;
	while (tmp_b)
	{
		target_pos = get_target(a, tmp_b->index, INT_MAX, target_pos);
		tmp_b->target_pos = target_pos;
		tmp_b = tmp_b->next;
	}
}
