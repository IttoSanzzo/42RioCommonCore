/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_env.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:13:15 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 02:13:17 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtin_env(t_mini *ms)
{
	ft_puttab(ms->vrt.ep, NULL);
	return (0);
}
