/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   core_utils.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 20:29:14 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/26 23:23:01 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_stack(int argc, char **argv)
{
	int			i;
	t_stack		*stack_a;
	long int	nb;

	stack_a = NULL;
	nb = 0;
	i = 0;
	while (++i < argc)
	{
		nb = ft_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			exit_error(&stack_a, NULL);
		if (i == 1)
			stack_a = stack_new((int)nb);
		else
			stack_add_bottom(&stack_a, stack_new((int)nb));
	}
	return (stack_a);
}

void	get_index(t_stack *stack_a, int stack_size)
{
	int		value;
	t_stack	*highest;
	t_stack	*ptr;

	while (--stack_size > 0)
	{
		ptr = stack_a;
		value = INT_MIN;
		highest = NULL;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				highest = ptr;
				ptr = stack_a;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->index = stack_size;
	}
}

int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}
