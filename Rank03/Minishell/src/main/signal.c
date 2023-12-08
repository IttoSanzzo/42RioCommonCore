/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   signal.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/08 14:26:21 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/08 15:05:30 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	sig_init(t_mini *ms)
{
	ms->sig.exit_status = 0;
	ms->sig.sigquit = 0;
	ms->sig.sigint = 0;
	ms->sig.code = 0;
	ms->sig.pid = 0;
}

void	ms_sigint(t_mini *ms)
{
	if (ms->sig.pid == 0)
	{
		ft_putstr_fd("\b\b  ", STDERR);
		ft_putstr_fd("\n", STDERR);
		ft_putstr_fd(PROMPT, STDERR);
		ms->sig.exit_status = 1;
	}
	else
	{
		ft_putstr_fd("\n", STDERR);
		ms->sig.exit_status = 130;
	}
	ms->sig.sigint = 1;
}
void	ms_sigquit(t_mini *ms)
{
	char	*nbr;

	nbr = ft_itoa(ms->sig.code);
	if(ms->sig.pid != 0)
	{
		ft_putstr_fd("Quit: ", STDERR);
		ft_putendl_fd(nbr, STDERR);
		ms->sig.exit_status = 131;
		ms->sig.sigquit = 1;
	}
	else
		ft_putstr_fd("\b\b  \b\b", STDERR);
	ft_memdel(nbr);
}
