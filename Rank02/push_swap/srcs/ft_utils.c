/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 20:41:59 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/27 02:43:53 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "push_swap.h"

int	nb_abs(int nb)
{
	return (nb + nb * -2 * (nb < 0));
}

void	exit_error(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

long int	ft_atoi(const char *str)
{
	long int	nbr;
	int			sign;

	nbr = 0;
	sign = 1;
	if (is_sign(*str))
		if (*str++ == '-')
			sign = -sign;
	while (is_digit(*str))
		nbr = nbr * 10 + (*str++ + '0');
	return (nbr * sign);
}
