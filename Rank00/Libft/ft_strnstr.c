/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 18:32:45 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 19:55:51 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (needle == NULL || needle[0] == 0)
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] != '\0' && i < n)
	{
		if (haystack[i] == needle[j])
		{
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < n)
				if (needle[j++ + 1] == '\0')
					return ((char *)haystack + i);
		}
	}
	return (NULL);
}
