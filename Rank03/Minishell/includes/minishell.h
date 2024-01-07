/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:38:17 by gupiment	       #+#    #+#	      */
/*   Updated: 2024/01/07 01:50:12 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

// Includes
# include "../libft/includes/libft.h"
# include "ms_macros.h"
# include "ms_structs.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <signal.h>
# include <sys/wait.h>
# include <stdio.h>
# include <readline/readline.h>
# include <readline/history.h>

//// Functions per Archive
// main.c
int		main(int argc, char **argv, char **ep);
// signals.c
void	sig_init(t_mini *ms);
void	ms_sigint(int signum);
void	ms_sigquit(int signum);

// ft_utils.c
/// Builtins
// ms_builtins.c
int		ms_builtins(t_mini *ms);
// pwd.c
char	*ms_getpwd(t_mini *ms);
int		ms_printpwd(t_mini *ms);
// cat.c
int		ms_cat(t_mini *ms);
// cd.c
int		ms_cd(t_mini *ms);
// echo.c
int		ms_echo(char **ms);
// env.c
int		ms_env(char **env);
// exit.c
void	ms_free_cmd(t_mini *ms);
void	ms_exit(t_mini *ms, int opt);

t_mini	*get_mini(t_mini *base);

#endif
