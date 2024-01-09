/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_hdoc.c                                          :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/09 02:18:54 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/09 02:42:03 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"
/*
static void	ms_reset_hdocs(t_mini *ms)
{
	ft_nfreetab(&ms->hdoc.docs);
	ms->hdoc.cdocs = 0;
	ms->hdoc.tdocs = 0;
}*/
/*
static int	ms_find_hdoc(char *line)
{
	int	i;

	i = -1;
	while (line[++i])
		if (line[i] == '<' && line[i + 1] == '<' && ft_cquotesn(line, i) == 0)
			return (i + 2);
	return (-1);
}

static int	ms_check_hdoc_end(char *line)
{
	int	i;
	t_mini	*ms;

	ms = ms_get_mini(NULL);
	i = -1;
	while (line[++i] == ' ')
		i++;
	if (!line[i])
	{
		ms->sig.sint = 1;
	}
	return (0);

}
*/
