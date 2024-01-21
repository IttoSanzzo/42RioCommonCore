/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:36:45 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 16:39:18 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	testing(void)
{
	int	i;

	i = -1;
	while (++i < 5)
		ft_putstr(MSS_FORK);
}

static void	ph_init(t_info *info, int ac, char **av)
{
	info->ph_num = ft_atoi(av[1]);
	info->tm_die = ft_atoi(av[2]);
	info->tm_eat = ft_atoi(av[3]);
	info->tm_slp = ft_atoi(av[4]);
	if (ac == 6)
		info->eat_goal = ft_atoi(av[5]);
}

int	main(int ac, char *av[])
{
	t_info	info;

	if (ac < 5 || ac > 6)
		return (1);
	ph_init(&info, ac, av);
	testing();
	return (0);
}
