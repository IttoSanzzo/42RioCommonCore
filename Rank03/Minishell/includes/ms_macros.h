/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_macros.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/07 01:48:11 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/11 17:22:37 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MS_MACROS_H
# define MS_MACROS_H

// Messages
# define EXIT_MSS "\033[38;5;43mExiting now...\n\033[0m"
# define CD_ERR_N "cd: too many arguments\n"
# define CD_ERR_A "cd: The directory \""
# define CD_ERR_B "\" does not exist\n"
# define TOKEN_ERR_A "minishell: syntax error near unexpected token \'"
# define TOKEN_ERR_B "\'\n"

// Prompts
# define DEFAULT_PROMPT "minishell"
# define ERR_SQUO "squotes> "
# define ERR_DQUO "dquotes> "
# define ERR_CEND "opencmd> "
# define HDOC_A "heredoc "
# define HDOC_B "> "
# define HDOC_EOF_A "\nminishell: warning: here-document delimited "
# define HDOC_EOF_B "by end-of-file (wanted `"
# define HDOC_EOF_C "`)\n"

// Intypes
# define IN_HDOC 1
# define IN_FILE 2
# define OUT_AP 1
# define OUT_NP 2

// Misc
# define TOKENS ";|&<>"
# define DTOKENS "&"

#endif
