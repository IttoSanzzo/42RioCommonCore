/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:35:31 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 18:02:27 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	ph_info_init(t_info *info, int ac, char **av)
{
	info->ph_num = (int)ft_atoi(av[1]);
	info->tm_die = (uint64_t)ft_atoi(av[2]);
	info->tm_eat = (uint64_t)ft_atoi(av[3]);
	info->tm_slp = (uint64_t)ft_atoi(av[4]);
	if (ac == 6)
		info->eat_goal = (int)ft_atoi(av[5]);
	else
		info->eat_goal = -1;
	if ((info->ph_num <= 0 || info->ph_num > 200) || (int)info->tm_die < 0
		|| (int)info->tm_eat < 0 || (int)info->tm_slp < 0)
		return (ph_error(NULL, ERR_IN_2));
	return (0);
}

int	main(int ac, char *av[])
{
	t_info	info;

	if ((ac < 5 || ac > 6) || ph_check_info(av) || ph_info_init(&info, ac, av))
		return (1);
//	if (info.ph_num == 1)
//		return (ph_loner(&info));
//	if (ph_th_init(&info))
//		return (1);
	ph_free_all(&info);
	return (0);
}
