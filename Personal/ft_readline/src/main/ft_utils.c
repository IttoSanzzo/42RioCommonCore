/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/08 09:37:18 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/08 09:46:48 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "ft_readline.h"

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	new_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		new_str[i++] = *s1++;
	while (*s2)
		new_str[i++] = *s2++;
	new_str[i] = '\0';
	return (new_str);
}

void	ft_bzero(void *s, size_t n)
{
	size_t			index;
	unsigned char	*str;

	str = s;
	index = 0;
	while (index < n)
	{
		str[index] = '\0';
		index++;
	}
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

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	while (*s)
		write(1, &*s++, 1);
}
