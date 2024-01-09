/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_check_tokens.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/09 04:24:26 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/09 04:24:42 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static void	ms_get_obj(char *token, char **obj)
{
	if (!token[0])
		*obj = ft_strdup("\\n");
	else if (token[0] == ';')
		*obj = ft_strdup(";");
	else if (token[0] == '&' && token[1] == '&')
		*obj = ft_strdup("&&");
	else if (token[0] == '<' && token[1] == '<')
		*obj = ft_strdup("<<");
	else if (token[0] == '>' && token[1] == '>')
		*obj = ft_strdup(">>");
	else if (token[0] == '|' && token[1] == '|')
		*obj = ft_strdup("||");
	else if (token[0] == '|')
		*obj = ft_strdup("|");
}

static int	ms_token_quotes(char *line, int *open, int *i)
{
	if (line[*i] == '\"' || line[*i] == '\'')
	{
		if (*open == 0 && line[*i] == '\"')
			*open = 2;
		else if (*open == 0 && line[*i] == '\'')
			*open = 1;
		else if (*open == 2 && line[*i] == '\"')
			*open = 0;
		else if (*open == 1 && line[*i] == '\'')
			*open = 0;
		return (1);
	}
	return (0);
}

static int	ms_token_test(char *line, int *i)
{
	int	token;
	int	open;

	open = 0;
	token = 0;
	while (line[++i[0]])
	{
		if (((*i > 0 && line[*i - 1] == '\\')
				|| ms_token_quotes(line, &open, i)) && token--)
			continue ;
		else if (*i > 0 && line[*i] == line[*i - 1]
			&& ft_strchr(TOKENS, line[*i]) && line[*i] != ';')
			continue ;
		else if (token > 0 && !open && ft_strchr(TOKENS, line[*i]))
			break ;
		else if (!open && ft_strchr(TOKENS, line[*i]))
			token = 1;
		else if (line[*i] != ' ' && line[*i] != '\n')
			token = 0;
	}
	return (token);
}

int	ms_check_tokens(t_mini *ms)
{
	int		i;
	char	*obj;

	i = -1;
	obj = NULL;
	if (ms_token_test(ms->line, &i))
		ms_get_obj((char *)(ms->line + i), &obj);
	if (obj && !ft_strncmp(obj, "\\n", 3))
	{
		i--;
		while (i > 0 && (ms->line[i] == ' ' || ms->line[i] == '\n'))
			i--;
		if (ms->line[i] == ';')
			ft_nfreestr(&obj);
	}
	if (obj)
	{
		ft_putstr_fd(TOKEN_ERR_A, STDERR);
		ft_putstr_fd(obj, STDERR);
		ft_putstr_fd(TOKEN_ERR_B, STDERR);
		ft_nfreestr(&obj);
		return (1);
	}
	return (0);
}
