/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_format_line.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/09 20:57:21 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/10 01:57:37 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static void	ms_scend(char **line)
{
	int	i;

	i = ft_strlen(*line) - 1;
	while (i >= 0 && (line[0][i] == ' ' || line[0][i] == '\n'))
		i--;
	if (line[0][i] != ';')
		ft_stradd_end(line, ';');
}

static void	ms_form_quotes(char *line, int *open, int *i)
{
	if (*i > 0 && line[*i - 1] == '\\')
		return ;
	else if (line[*i] == '\"' || line[*i] == '\'')
	{
		if (*open == 0 && line[*i] == '\"')
			*open = 2;
		else if (*open == 0 && line[*i] == '\'')
			*open = 1;
		else if (*open == 2 && line[*i] == '\"')
			*open = 0;
		else if (*open == 1 && line[*i] == '\'')
			*open = 0;
	}
	return ;
}

static t_clist	*ms_form_tab(t_clist *form, char *line, int i, int token)
{
	int	space;
	int	open;

	(void)token;

	open = 0;
	space = 0;
	while (line[++i])
	{
		ms_form_quotes(line, &open, &i);
		if (line[i] == ' ' && !open)
		{
			space = 1;
			continue ;
		}
		if (ft_strchr(TOKENS, line[i]) && ft_strchr(TOKENS, line[i - 1]))
		{
			space = 0;
			token = 1;
		}
		if (space)
		{
			space = 0;
			ft_clstadd_end(&form, ft_clstnew(' '));
		}
		ft_clstadd_end(&form, ft_clstnew(line[i]));
	}
	return (form);
}

static void	ms_form_space(char **line)
{
	t_clist	*form;

	form = NULL;
	form = ms_form_tab(form, *line, -1, 0);
	ft_strdrep(&*line, ft_cltos(form));
	ft_freeclst(&form);
}

void	ms_format_line(t_mini *ms)
{
	ms_scend(&ms->line);
	ms_form_space(&ms->line);
}
