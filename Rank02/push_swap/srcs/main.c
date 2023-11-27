/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 19:38:35 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/26 23:18:56 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*stack_a))
		do_sa(stack_a);
	else if (stack_size == 3)
		s_sort(stack_a);
//	else if (stack_size > 3 && !is_sorted(*stack_a))
//		f_sort(stack_a, stack_b);
	(void) stack_b;
}

int	main(int argc, char *argv[])
{
	int		stack_size;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (0);
	if (!check_input(argv))
		exit_error(NULL, NULL);
	stack_b = NULL;
	stack_a = get_stack(argc, argv);
	stack_size = get_stack_size(stack_a);
	get_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
