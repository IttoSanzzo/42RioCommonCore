/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/23 19:49:50 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/07 19:52:45 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*start;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	start = str;
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (start);
}

char	*ft_strchr(const char *s, int c)
{
	char	*s_ptr;

	s_ptr = (char *) s;
	while (*s_ptr != c)
		if (*s_ptr++ == '\0')
			return (NULL);
	return (s_ptr);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = '\0';
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	int		i;

	i = nmemb * size;
	if (nmemb && i && i / nmemb != size)
		return (NULL);
	mem = (void *) malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}
