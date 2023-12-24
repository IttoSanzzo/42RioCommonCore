/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:38:17 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/23 22:01:57 by gupiment         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

// Includes
# include "../libft/includes/libft.h"
# include "signal.h"
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>

// Pre-processors
# define WHITE "\033[0m"
# define PURPLE "\033[0;35m"
# define GOLDEN "\033[38;5;220m"

# define EXT_MSS "\033[38;5;43mExiting now...\n\033[0m"
# define CDERR_A "cd: The directory \""
# define CDERR_B "\" does not exist\n"
# define STDIN 0
# define STDOUT 1
# define STDERR 2

# define EXT_SUC 0

// Structs
typedef struct s_sig
{
	int	exit_status;
	int	sigquit;
	int	sigint;
	int	code;
	int	pid;
}	t_sig;

typedef struct s_vars
{
	int		ac;
	char	*path;
	char	**av;
	char	**ep;
}	t_vars;

typedef struct s_mini
{
	char			**cmdl;
	char			*homepath;
	char			*prompt;
	char			*line;
	int				pid;
	int				exit;
	int				ret;
	struct s_vars	df;
	struct s_vars	rt;
	struct s_vars	ex;
	struct s_sig	sig;
}	t_mini;

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
// exit.c
void	ms_free_cmd(t_mini *ms);
void	ms_exit(t_mini *ms);




t_mini	*get_mini(t_mini *base);

#endif
