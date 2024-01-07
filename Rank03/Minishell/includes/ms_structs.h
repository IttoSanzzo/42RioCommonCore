/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_structs.h                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/07 01:43:00 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/07 01:44:14 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MS_STRUCTS_H
# define MS_STRUCTS_H

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
	char			**paths;
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

#endif
