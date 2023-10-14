/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ten_queens.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/14 11:48:08 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/14 13:05:55 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	tq_tester(int tab[10], int column, int test_nu, int i)
{
	while (++i < column)
		if (test_nu == tab[i] || i + tab[i] == column + test_nu
			|| i - tab[i] == column - test_nu)
			return (0);
	return (1);
}

void	tq_solve(int tab[10], int column, int test_nu, int *f_res)
{
	if (column == 10)
	{
		*f_res += 1;
		while (++test_nu < 10)
			ft_putchar(tab[test_nu] + 48);
		ft_putchar('\n');
		return ;
	}
	while (++test_nu < 10)
	{
		tab[column] = test_nu;
		if (tq_tester(tab, column, test_nu, -1) == 1)
			tq_solve(tab, column + 1, -1, f_res);
	}
}

int	ten_queens(void)
{
	int		tab[10];
	int		res;

	res = -1;
	while (++res < 10)
		tab[res] = 0;
	res = 0;
	tq_solve(tab, 0, -1, &res);
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ten_queens());
}
*/
