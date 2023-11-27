/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 21:46:42 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/26 23:22:04 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "push_swap.h"

static int	arg_has_doubles(char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = 0;
		while (argv[++j])
			if (j != i && !nbstr_cmp(argv[i], argv[j]))
				return (1);
	}
	return (0);
}

static int	arg_is_number(char *arg)
{
	int	i;

	i = 0;
	if (is_sign(arg[i]) && arg[i + 1])
		i++;
	while (arg[i] && is_digit(arg[i]))
		i++;
	if (arg[i] != '\0' && !is_digit(arg[i]))
		return (0);
	return (1);
}

static int	arg_is_zero(char *arg)
{
	if (is_sign(*arg))
		arg++;
	while (*arg && *arg == '0')
		arg++;
	return (*arg == '\0');
}

int	check_input(char **argv)
{
	int	zeros;
	int	i;

	zeros = 0;
	i = 0;
	while (argv[++i])
	{
		if (!arg_is_number(argv[i]))
			return (0);
		zeros += arg_is_zero(argv[i]);
	}
	return (zeros <= 1 && !arg_has_doubles(argv));
}
