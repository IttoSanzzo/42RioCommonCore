/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ms_structs.h                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/07 01:43:00 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/09 04:29:36 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MS_STRUCTS_H
# define MS_STRUCTS_H

// Structs
typedef struct s_sig
{
	int	exit_status;
	int	squit;
	int	sint;
	int	code;
	int	pid;
}	t_sig;

typedef struct s_hdoc
{
	char	**docs;
	int		cdocs;
	int		tdocs;
}	t_hdoc;

typedef struct s_vars
{
	int		ac;
	int		tp;
	char	*hdoc;
	char	*path;
	char	**av;
	char	**ep;
}	t_vars;

typedef struct s_mini
{
	char			*altprompt;
	char			*prompt;
	char			*line;
	char			**cmdl;
	char			**paths;
	int				exit;
	int				ret;
	struct s_vars	vrt;
	struct s_vars	**vex;
	struct s_hdoc	hdoc;
	struct s_sig	sig;
}	t_mini;

#endif
