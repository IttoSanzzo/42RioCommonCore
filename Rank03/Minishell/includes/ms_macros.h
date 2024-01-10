/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_macros.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/07 01:48:11 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/09 04:41:40 by marcosv2         ###   ########.fr       */
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
# define HDOC_A "heredoc"
# define HDOC_B "> "

// Misc
# define TOKENS ";|&<>"

#endif
