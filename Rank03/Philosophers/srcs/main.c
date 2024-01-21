/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 23:16:35 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 15:26:58 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	while (*s)
		write(1, &*s++, 1);
}

static void	testing(void)
{
	int	i;

	i = -1;
	while (++i < 5)
		ft_putstr("bananada\n");
}

int	main(int ac, char *av[])
{
	(void)ac;
	(void)av;
	ft_putstr("hello world!\n");
	testing();
	return (0);
}
