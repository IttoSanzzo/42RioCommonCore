/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/23 19:07:19 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/07 19:59:38 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/// Includes
# include <unistd.h>
# include <stdlib.h>

/// Pre-Processors
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1234
# endif

/// get_next_line
char	*get_next_line(int fd);

/// get_next_line_utils
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *s, int c);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
