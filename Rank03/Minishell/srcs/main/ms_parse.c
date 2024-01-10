/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_parse.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 05:36:42 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/10 04:21:32 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static int	ms_check_entry(t_mini *ms)
{
	int	ret;

	ret = 0;
	if (ft_cquotes(ms->line) == 1 && ++ret)
		ms->altprompt = ft_strdup(ERR_SQUO);
	else if (ft_cquotes(ms->line) == 2 && ++ret)
		ms->altprompt = ft_strdup(ERR_DQUO);
	else if (ft_cend(ms->line) == 1 && ++ret)
		ms->altprompt = ft_strdup(ERR_CEND);
	return (ret);
}

static void	ms_readline(t_mini *ms)
{
	char	*su;

	ms->sig.sint = 0;
	ms_gen_prompt(ms);
	ms_free_cmd(ms);
	ms->line = ft_readline(ms->prompt);
	if (!ms->line)
		ms_endlexit();
	if (ms->sig.sint || !ms->line[0])
		return (ms_readline(ms));
	while (ms_check_entry(ms))
	{
		su = ft_readline(ms->altprompt);
		ft_nfreestr(&ms->altprompt);
		if (!su)
			ms_endlexit();
		if (ms->line)
		{
			ft_sujoin(&ms->line, "\n");
			ft_freejoin(&ms->line, &su);
		}
		if (ms->sig.sint)
			return (ms_readline(ms));
	}
	ft_add_history(ms->line);
}

void	ms_parse(t_mini *ms)
{
	ms_free_vex(ms);
	ms_readline(ms);
	if (ms_check_tokens(ms))
		return (ms_parse(ms));
								ft_printc(C_CYAN, "String........:%s %s\n", C_WHITE, ms->line);
	ms_format_line(ms);
//	ms_readhdoc(ms);
	ms->vex = (t_vars **)ft_calloc(2, sizeof(t_vars *));
	ms->vex[0] = (t_vars *)ft_calloc(2, sizeof(t_vars));
	ms->vex[0]->av = (char **)ft_calloc(2, sizeof(char *));
	ms->vex[0]->av[0] = ft_strdup(ms->line);
	ms->vex[0]->ac = 1;
	return ;
}
