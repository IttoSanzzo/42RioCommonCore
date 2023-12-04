/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: gupiment <gupiment@student.42.fr>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/04 13:38:17 by gupiment	       #+#    #+#	      */
/*   Updated: 2023/12/04 14:54:05 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

// Includes
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libft/libft.h"

// Pre-processors
# define EXT_SUC 0

// Structs

//// Functions per Archive
// main.c
int		main(int argc, char **argv, char **envp);

// ft_utils.c

///Builtins
// exit.c
void	ms_exit(void);

#endif
