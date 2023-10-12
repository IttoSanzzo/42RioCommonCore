/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/11 18:39:00 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/12 15:22:39 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_calc_info(int size, int *tab)
{
	int	high;
	int	wide;
	int	step;
	int	total;

	wide = 1;
	step = 4;
	high = 1;
	while (high <= size)
	{
		wide = wide + (2 * (2 + high++));
		wide = wide + step;
		if (high % 2 && high < size)
			step = step + 2;
	}
	tab[0] = wide - step;
	total = 0;
	while (size >= 1)
		total += size-- + 2;
	tab[1] = total;
}

int	se(int i, int *tab, int y, int choice)
{
	int	point;
	int	next;
	int	counter;
	int	add;

	point = 0;
	next = 4;
	counter = 0;
	add = -1;
	i = 0;
	while (++i <= y)
	{
		if (++point && ++counter == next)
		{
			counter = 1;
			if (next++ % 2 == 0)
				add++;
			point += 2 + add;
		}
	}
	if (choice == 0)
		return ((tab[0] / 2) + 1 - point);
	return ((tab[0] / 2) + 1 + point);
}

int	ft_check_door(int size, int i, int *tab, int y)
{
	if (size % 2 == 0)
		size--;
	if ((i >= (tab[0] / 2 + 1) - size / 2)
		&& (i <= (tab[0] / 2 + 1) + size / 2)
		&& (y > tab[1] - size))
	{
		if ((i == (tab[0] / 2 + (size / 2))
				&& (y == (tab[1] - (size / 2)))
				&& (size >= 5)))
			return (1);
		else
			return (2);
	}
	return (0);
}

int	ft_print_sas(int size, int *tab, int y, int i)
{
	if (i == se(i, tab, y, 1) + 1)
	{
		ft_putchar('\n');
		return (1);
	}
	if ((i < se(i, tab, y, 0)))
		ft_putchar(' ');
	else if (i == se(i, tab, y, 0))
		ft_putchar('/');
	else if (i == se(i, tab, y, 1))
		ft_putchar('\\');
	else if (ft_check_door(size, i, tab, y) == 1)
		ft_putchar('$');
	else if (ft_check_door(size, i, tab, y) == 2)
		ft_putchar('|');
	else if (i > se(i, tab, y, 0))
		ft_putchar('*');
	return (0);
}

void	sastantua(int size)
{
	int	tab[3];
	int	y;
	int	i;

	tab[2] = size;
	if (size < 1)
		return ;
	ft_calc_info(size, tab);
	y = 0;
	while (++y <= tab[1])
	{
		i = 0;
		while (++i <= tab[0] + 1)
			if (ft_print_sas(size, tab, y, i) == 1)
				i = tab[0] + 2;
	}
}
/*
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		sastantua(atoi(argv[1]));
	return (0);
}*/
