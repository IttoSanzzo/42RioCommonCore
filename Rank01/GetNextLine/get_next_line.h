/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/23 19:07:19 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/23 21:32:22 by marcosv2         ###   ########.fr       */
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

/// get_next_line_utils
char	*ft_strdup(const char *src);


#endif
