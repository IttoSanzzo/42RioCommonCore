/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_prompt.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 05:00:38 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 05:32:50 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static int	ms_prompt_path_len(char *path)
{
	int	count;
	int	i;

	count = 0;
	i = ft_strlen(path);
	if (path[0] == '/')
		count++;
	while (i >= 0 && path[i] != '/')
	{
		i--;
		count++;
	}
	while (--i >= 0)
	{
		count += 2;
		while (i >= 0 && path[i] != '/')
			i--;
	}
	return (count);
}

static void	ms_prompt_path_trim(char **path)
{
	int		len;
	int		i;
	char	*trim;

	if (!*path)
		return ;
	len = ms_prompt_path_len(*path);
	trim = (char *)ft_calloc(len + 1, sizeof(char));
	i = ft_strlen(*path);
	while (i >= 0 && path[0][i] != '/')
		trim[--len] = path[0][i--];
	while (i >= 0)
	{
		trim[--len] = path[0][i--];
		while (i >= 0 && path[0][i] != '/')
			i--;
		trim[--len] = path[0][i + 1];
	}
	if (path[0][0] == '/')
		trim[0] = '/';
	ft_nfreestr(path);
	*path = trim;
}

static void	ms_gen_prompt_path(t_mini *ms)
{
	int		homel;
	char	*path;

	homel = ft_strlen(ms_home());
	if (homel > 0 && !strncmp(ms_pwd(), ms_home(), homel - 1))
	{
		path = ft_strdup("~");
		ft_sujoin(&path, (char *)(ms_pwd() + homel));
	}
	else
		path = ft_strdup((char *)ms_pwd());
	ms_prompt_path_trim(&path);
	if (path)
	{
		ft_sujoin(&ms->prompt, C_GREEN);
		ft_sujoin(&ms->prompt, path);
	}
}

void	ms_gen_prompt(t_mini *ms)
{
	ft_nfreestr(&ms->prompt);
	ms->prompt = ft_strjoin(C_PURPLE, ft_getarg(ms->vrt.ep, "USER="));
	if (!ms->prompt)
		ms->prompt = ft_strjoin(C_PURPLE, DEFAULT_PROMPT);
	if (ft_getarg_p(ms->vrt.ep, "NAME=") != -1)
	{
		ft_sujoin(&ms->prompt, C_WHITE);
		ft_sujoin(&ms->prompt, "@");
		ft_sujoin(&ms->prompt, ft_getarg(ms->vrt.ep, "NAME="));
	}
	ft_sujoin(&ms->prompt, " ");
	ms_gen_prompt_path(ms);
	ft_sujoin(&ms->prompt, C_GOLDEN);
	ft_sujoin(&ms->prompt, "$ ");
	ft_sujoin(&ms->prompt, C_WHITE);
}
