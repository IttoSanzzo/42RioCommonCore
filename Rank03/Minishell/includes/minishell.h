/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:38:17 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/12 15:48:15 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

// Includes
# include "../libft/includes/libft.h"
# include "signal.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// Pre-processors
# define PROMPT "\033[0;35mmari\033[38;5;220m$\033[0m "
# define EXT_MSS "\033[38;5;43mExiting now...\n\033[0m"

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
	char	*path;
	char	**av;
	char	**ep;
}	t_vars;

typedef struct s_mini
{
	struct s_vars	rt;
	struct s_vars	ex;
	char			**cmdl;
	char			*line;
	int				exit;
	int				ret;
	struct s_sig	sig;
}	t_mini;

//// Functions per Archive
// main.c
int		main(int argc, char **argv, char **ep);
// signals.c
void	sig_init(t_mini *ms);
void	ms_sigint(t_mini *ms);
void	ms_sigquit(t_mini *ms);

// ft_utils.c

/// Builtins
// ms_builtins.c
int		ms_builtins(t_mini *ms);
// pwd.c
int		ms_printpwd(t_mini *ms);
char	*ms_getpwd(t_mini *ms);
// exit.c
void	ms_free_cmd(t_mini *ms);
void	ms_exit(t_mini *ms);

#endif
