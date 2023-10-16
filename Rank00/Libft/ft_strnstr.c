/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 18:32:45 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/16 00:53:05 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = -1;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[++h] != '\0')
	{
		n = -1;
		while ((h + ++n) < len && haystack[h + n] == needle[n])
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
		if (needle[n] == '\0')
			return ((char *)haystack + h);
	}
	return (0);
}
