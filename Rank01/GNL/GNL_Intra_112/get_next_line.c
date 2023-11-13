/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/07 10:04:17 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/07 20:14:53 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_join_and_free(char *text, char *buffer)
{
	char	*temp;

	temp = ft_strjoin(text, buffer);
	free(text);
	return (temp);
}

char	*read_first_line(int fd, char *text)
{
	char	*buffer;
	int		bytes_read;

	if (!text)
		text = ft_calloc(1, 1);
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(text);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = 0;
		text = ft_join_and_free(text, buffer);
		if (ft_strchr(text, '\n'))
			break ;
	}
	free(buffer);
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
		free(text);
		return (NULL);
	}
	str = ft_calloc((ft_strlen(text) - i + 1), sizeof(*text));
	if (!str)
		return (NULL);
	while (text[++i])
		str[j++] = text[i];
	str[j] = '\0';
	free(text);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*ftext;
	static char	*ltext;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ltext = read_first_line(fd, ltext);
	if (!ltext)
		return (NULL);
	ftext = ft_get_fl(ltext);
	ltext = ft_cls_sl(ltext);
	return (ftext);
}
