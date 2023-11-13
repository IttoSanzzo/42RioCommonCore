/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/13 10:47:57 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/13 11:05:39 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_join_and_free(char *text, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(text, buffer);
	free(text);
	return (temp);
}

char	*ft_get_nl(int fd, char *text)
{
	char	*buffer;
	int		bytes_read;

	if (!text)
		text = ft_calloc(1, 1);
	buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(text, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free (text);
			free (buffer);
			return (NULL);
		}
		buffer[bytes_read] = 0;
		text = ft_join_and_free(text, buffer);
		if (ft_strchr(text, '\n'))
			break ;
	}
	free (buffer);
	return (text);
}

char	*ft_get_fl(char *text)
{
	int		i;
	char	*str;

	i = 0;
	if (!text[i])
		return (NULL);
	while (text[i] && text[i] != '\n')
		i++;
	str = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (text[i] && text[i] != '\n')
	{
		str[i] = text[i];
		i++;
	}
	if (text[i] && text[i] == '\n')
		str[i++] = '\n';
	return (str);
}

char	*ft_cls_sl(char *text)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (text[i] && text[i] != '\n')
		i++;
	if (!text[i])
	{
		free (text);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(text) - i + 1), sizeof(*text));
	if (!str)
		return (NULL);
	while (text[++i])
		str[j++] = text[i];
	str[j] = '\0';
	free (text);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*ftext;
	static char	*ltext[FOPEN_MAX];

	if (BUFFER_SIZE <= 0 || fd < 0 || fd > FOPEN_MAX)
		return (NULL);
	ltext[fd] = ft_get_nl(fd, ltext[fd]);
	if (!ltext[fd])
		return (NULL);
	ftext = ft_get_fl(ltext[fd]);
	ltext[fd] = ft_cls_sl(ltext[fd]);
	return (ftext);
}
