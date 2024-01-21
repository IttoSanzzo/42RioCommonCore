/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:03:23 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 18:05:14 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *nptr)
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

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, &*s++, 1);
	write(fd, "\n", 1);
}
