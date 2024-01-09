/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_builtin_pwd.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/12 14:42:40 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 09:24:18 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

int	ms_builtin_pwd(t_vars *vex)
{
	if (vex->ac > 1)
		ft_printf("pwd: expected 0 arguments; got %d\n", vex->ac - 1);
	else
		ft_printf("%s\n", ms_pwd());
	return (0);
}
