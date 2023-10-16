/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 19:10:01 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 19:57:13 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!s)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		dst[j++] = s[i++];
	dst[j] = '\0';
	return (dst);
}
