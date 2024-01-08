/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/08 02:11:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/08 04:39:20 by marcosv2         ###   ########.fr       */
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
void	ms_sig_init(t_mini *ms);
void	ms_sigint(int signum);
void	ms_sigquit(int signum);

/// Builtins
int		ms_builtin_switch(t_mini *ms);
int		ms_builtin_echo(t_mini *ms);
int		ms_builtin_cd(t_mini *ms);
int		ms_builtin_pwd(t_mini *ms);
int		ms_builtin_export(t_mini *ms);
int		ms_builtin_unset(t_mini *ms);
int		ms_builtin_env(t_mini *ms);
int		ms_builtin_exit(t_mini *ms);
void	ms_free_cmd(t_mini *ms);
char	*ms_getpwd(t_mini *ms);

/// ms_gets.c
char	*ms_home(void);
char	*ms_pwd(void);

/// ms_utils
t_mini	*ms_get_mini(t_mini *ms);
void	ms_gen_prompt(t_mini *ms);

#endif
