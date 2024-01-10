/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_format_line.c                                   :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/09 20:57:21 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/09 23:12:20 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

static void	ms_sce(char **line)
{
	int	i;

	i = ft_strlen(*line) - 1;
	while (i >= 0 && (line[0][i] == ' ' || line[0][i] == '\n'))
		i--;
	if (line[0][i] != ';')
		ft_stradd_end(line, ';');
}

void	ms_format_line(t_mini *ms)
{
//	char	*new;

	ms_sce(&ms->line);
}
