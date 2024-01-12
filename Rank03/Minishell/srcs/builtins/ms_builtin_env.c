/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_env.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:13:15 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 21:47:07 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtin_env(t_vars *vex)
{
	t_mini	*ms;

	ms = ms_get_mini(NULL);
	if (!vex->av[1])
	{
		ft_puttab(ms->ep, NULL);
		return (0);
	}
	return (0);
}
