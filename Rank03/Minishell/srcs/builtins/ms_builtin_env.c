/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_env.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/23 22:37:09 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/07 02:48:48 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtin_env(t_mini *ms)
{
	ft_puttab(ms->rt.ep, NULL);
	return (0);
}
