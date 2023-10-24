/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/23 19:04:12 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/23 22:44:19 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int		i;
	char	buffer[BUFFER_SIZE + 1];
	char	c[1];

	c[0] = 0;
	if (fd < 0 || BUFFER_SIZE <= 0 || !read(fd, c, 1) || !c[0])
		return (NULL);
	i = -1;
	while (++i < BUFFER_SIZE + 1 && c[0] != '\n')
	{
		buffer[i] = c[0];
		if (!read(fd, c, 1))
		{
			buffer[i + 1] = 0;
			return (ft_strdup(buffer));
		}
	}
	if (c[0] == '\n')
		buffer[i++] = '\n';
	buffer[i] = 0;
	return (ft_strdup(buffer));
}
/*
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;
	char	*this_line;

	(void) argc;
	(void) argv;
	i = -1;
	fd = -1;
//	if (argc == 2)
	fd = 100;
//	fd = open(argv[1], O_RDONLY);
	while (++i < 15)
	{
		this_line = get_next_line(fd);
		if (!this_line)
		{
			printf("(null)");
			break;
		}
		printf("%s", this_line);
		free(this_line);
	}
	printf("{END}");
	close(fd);
	return (0);
}
*/
