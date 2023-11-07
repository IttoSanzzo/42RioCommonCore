/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/07 10:04:57 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/07 10:07:57 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1234
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*read_first_line(int fd, char *text);
char	*get_liner(char *text);
char	*clean_first_line(char *text);
void	*ft_calloc(unsigned int count, unsigned int size);

#endif
