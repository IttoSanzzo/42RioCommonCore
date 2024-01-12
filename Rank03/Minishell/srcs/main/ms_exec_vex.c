/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_exec_vex.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/11 21:49:26 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 22:19:30 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static void	ms_exec_fail(char *cmd)
{
	ft_putstr(EXEC_FAIL_A);
	ft_putstr(cmd);
	ft_putstr(EXEC_FAIL_B);
}

void	ms_exec_vex(t_mini *ms, t_vars *vex)
{
	ms->sig.pid = fork();
	if (ms->sig.pid == 0)
	{
	//	ft_printf("%sExecTry>.: %s|%s|%s\n", C_GOLDEN, C_CYAN, vex->av[0], C_WHITE);
	//	execve(vex->path, vex->av, vex->ep);
		execve(vex->av[0], vex->av, vex->ep);
		ms_exec_fail(vex->av[0]);
		ms_exec_exit();
	}
	wait(NULL);
}
