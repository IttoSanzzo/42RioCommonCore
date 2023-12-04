/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:36:45 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/04 18:30:08 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "minishell.h"

void	mini_init(t_mini *mini, char **envp)
{
	mini->env = envp;
}

int	main(int argc, char **argv, char **envp)
{
	t_mini	mini;
	static int	i;

	(void) argc;
	(void) argv;
	mini_init(&mini, envp);
}
