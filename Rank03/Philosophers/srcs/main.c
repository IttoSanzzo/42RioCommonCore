/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.c											 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: marcosv2 <marcosv2@student.42.rio>		 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/01/19 23:16:35 by marcosv2		  #+#	#+#			 */
/*   Updated: 2024/01/21 16:33:40 by marcosv2		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "philo.h"

int	 ft_atoi(const char *nptr)
{
	int		total;
	int		signal;

	total = 0;
	signal = 1;
	while ((*nptr >= '\t' && *nptr <= '\r') || *nptr == ' ')
		nptr++;
	if ((*nptr == '-' || *nptr == '+') && *nptr++ == '-')
		signal *= -1;
	while (*nptr >= '0' && *nptr <= '9')
		total = total * 10 + (*nptr++ - '0');
	return (total * signal);
}

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
