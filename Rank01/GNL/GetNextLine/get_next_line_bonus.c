/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/23 19:04:12 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/07 19:59:18 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_jf(char *ltext, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(ltext, buffer);
	free(ltext);
	return (temp);
}

char	*ft_ff(char *ltext)
{
	int		i;
	char	*ftext;

	i = 0;
	if (!ltext[i])
		return (NULL);
	while (ltext[i] && ltext[i] != '\n')
		i++;
	ftext = (char *)ft_calloc(i + 2, sizeof(char));
	if (!ftext)
		return (NULL);
	i = 0;
	while (ltext[i] && ltext[i] != '\n')
	{
		ftext[i] = ltext[i];
		i++;
	}
	if (ltext[i] && ltext[i] == '\n')
		ftext[i] = '\n';
	return (ftext);
}

char	*ft_sl(char *ltext)
{
	int		i;
	int		j;
	char	*stext;

	i = 0;
	j = 0;
	while (ltext[i] && ltext[i] != '\n')
		i++;
	if (!ltext[i])
	{
		free(ltext);
		return (NULL);
	}
	stext = (char *)ft_calloc((ft_strlen(ltext) - i + 1), sizeof(*ltext));
	if (!stext)
		return (NULL);
	while (ltext[++i])
		stext[j++] = ltext[i];
	stext[j] = '\0';
	free(ltext);
	return (stext);
}

char	*ft_gl(int fd, char *ltext)
{
	int		br;
	char	*buffer;

	if (!ltext)
		ltext = (char *)ft_calloc(1, sizeof(char));
	buffer = (char *)ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	br = 1;
	while (br > 0)
	{
		br = read(fd, buffer, BUFFER_SIZE);
		if (br == -1)
		{
			free(ltext);
			free(buffer);
			return (NULL);
		}
		buffer[br] = 0;
		ltext = ft_jf(ltext, buffer);
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (ltext);
}

char	*get_next_line(int fd)
{
	static char	*ltext;
	char		*ftext;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ltext = ft_gl(fd, ltext);
	if (!ltext)
		return (NULL);
	ftext = ft_ff(ltext);
	ltext = ft_sl(ltext);
	return (ftext);
}
/*
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char *argv[])
{
	int		fd;
	int		i;
	char	*this_line;

	(void) argc;
	(void) argv;
	i = -1;
	fd = open("../TestText", O_RDONLY);
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
