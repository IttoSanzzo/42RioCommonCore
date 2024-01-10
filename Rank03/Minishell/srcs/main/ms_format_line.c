/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_format_line.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/09 20:57:21 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/10 03:06:01 by marcosv2         ###   ########.fr       */
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

static int	ms_form_check(char c, int open, int *token, int *space)
{
	if (c == ' ' && !open)
	{
		if (!*token)
			*space = 1;
		return (1);
	}
	if (!open && !*token && ft_strchr(TOKENS, c))
	{
		*space = 0;
		*token = 1;
		return (2);
	}
	else if (*space)
	{
		*space = 0;
		return (2);
	}
	else if (*token && !(ft_strchr(TOKENS, c)))
	{
		*token = 0;
		return (2);
	}
	return (0);
}

static t_clist	*ms_form_tab(t_clist *form, char *line)
{
	int	token;
	int	space;
	int	open;
	int	ret;
	int	i;

	i = -1;
	ret = 0;
	open = 0;
	token = 0;
	space = 0;
	while (line[++i])
	{
		ft_squotes(line, &open, &i);
		ret = ms_form_check(line[i], open, &token, &space);
		if (ret == 1)
			continue ;
		else if (ret == 2)
			ft_clstadd_end(&form, ft_clstnew(' '));
		ft_clstadd_end(&form, ft_clstnew(line[i]));
	}
	return (form);
}

static void	ms_form_space(char **line)
{
	t_clist	*form;

	form = NULL;
	form = ms_form_tab(form, *line);
	ft_strdrep(&*line, ft_cltos(form));
	ft_freeclst(&form);
}

void	ms_format_line(t_mini *ms)
{
	ms_scend(&ms->line);
	ms_form_space(&ms->line);
}
