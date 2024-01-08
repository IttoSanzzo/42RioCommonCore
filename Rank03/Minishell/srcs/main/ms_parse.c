/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_parse.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 05:36:42 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 07:58:22 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static void	ms_readline(t_mini *ms)
{
	char	*su;

	ms->sig.sint = 0;
	ms_gen_prompt(ms);
	ms_free_cmd(ms);
	ms->line = ft_readline(ms->prompt);
	if (!ms->line)
	{
		ft_putchar('\n');
		ms_builtin_exit(ms);
	}
	if (ms->sig.sint || !ms->line[0])
		return (ms_readline(ms));
	while (!ft_cquotes(ms->line))
	{
		su = ft_readline("> ");
		if (ms->line)
			ft_freejoin(&ms->line, &su);
		if (ms->sig.sint)
			return (ms_readline(ms));
	}
	ft_add_history(ms->line);
}

void	ms_parse(t_mini *ms)
{
	ms_readline(ms);
}
