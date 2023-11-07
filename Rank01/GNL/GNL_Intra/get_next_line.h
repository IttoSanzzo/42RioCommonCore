/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/07 10:04:57 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/07 20:23:43 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/// Includes
# include <unistd.h>
# include <stdlib.h>

/// Pre-Processors
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1234
# endif

/// get_next_line
char	*get_next_line(int fd);
char	*ft_get_nl(int fd, char *text);
char	*ft_get_fl(char *text);
char	*ft_cls_sl(char *text);

/// get_next_line_utils
int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
void	ft_bzero(void *s, unsigned int n);
void	*ft_calloc(unsigned int count, unsigned int size);

#endif
