/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_export.c                                :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:13:15 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/16 18:56:31 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_export_core(t_mini *ms, char *arg)
{
	int		eq;
	int		p;

	eq = ft_strchp(arg, '=');
	if (eq == -1)
		return ;
	arg[eq] = '\0';
	p = ft_getarg_p(ms->ep, arg);
	arg[eq] = '=';
	if (p != -1)
		ft_strdrep(&ms->ep[p], ft_strdup(arg));
	else
		ft_tabadd_end(&ms->ep, ft_strdup(arg));
}

int	ms_builtin_export(t_vars *vex)
{
	int		i;
	t_mini	*ms;

	ms = ms_get_mini(NULL);
	i = 0;
	while (vex->av[++i])
	{
		if (vex->av[i][0])
			ms_export_core(ms, (char *)vex->av[i]);
	}
	return (ms_ret(0));
}
