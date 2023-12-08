/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_readline.h                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/08 07:15:54 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/08 09:46:01 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_READLINE_H
# define FT_READLINE_H

// includes
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

/// main.c
char	*ft_readline(char *prompt);

void	ft_putstr(char *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(char const *str);

#endif
