/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 17:05:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/12 19:33:55 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static int	ft_start(char *fn)
{
	int		fd;
	char	c[1];

	if (fn)
	fd = open(fn, O_RDONLY);
	if (fd < 0)
		return (-1);
	while (read(fd, &c, 1) != 0)
		write(1, &c, 1);
	if (fn)
		close(fd);
	return (0);
}

static void	ft_putstr_error(char *str)
{
	while (*str)
		write(2, &*str++, 1);
}

static void	ft_errors(int cherr, char *fn)
{
	if (cherr == -1)
	{
		ft_putstr_error("cat: ");
		ft_putstr_error(fn);
		ft_putstr_error(": No such file or directory\n");
	}
}

int	ms_cat(t_mini *ms)
{
	int	i;

	if (ms->ex.ac == 1)
		while (1)
			ft_start(NULL);
	i = 0;
	while (++i < ms->ex.ac)
		ft_errors(ft_start(ms->ex.av[i]), ms->ex.av[i]);
	return (0);
}
