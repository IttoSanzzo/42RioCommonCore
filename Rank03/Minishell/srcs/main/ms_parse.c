/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_parse.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 05:36:42 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 06:13:11 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	ms_parse(t_mini *ms)
{
	char	*su;

	ms_gen_prompt(ms);
	ft_nfreestr(&ms->line);
	ms->line = ft_readline(ms->prompt);
	if (!ms->line)
	{
		ft_putchar('\n');
		ms_builtin_exit(ms);
	}
	while (!ft_cquotes(ms->line))
	{
		su = ft_readline("> ");
		if (ms->line)
			ft_freejoin(&ms->line, &su);
	}
	ft_add_history(ms->line);
}
