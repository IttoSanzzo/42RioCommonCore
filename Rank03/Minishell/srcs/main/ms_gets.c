/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_gets.c                                          :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 04:34:20 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 21:45:22 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

char	*ms_home(void)
{
	static t_mini	*ms;

	if (!ms)
		ms = ms_get_mini(NULL);
	return (ft_getarg(ms->ep, "HOME="));
}

char	*ms_pwd(void)
{
	static t_mini	*ms;

	if (!ms)
		ms = ms_get_mini(NULL);
	return (ft_getarg(ms->ep, "PWD="));
}
