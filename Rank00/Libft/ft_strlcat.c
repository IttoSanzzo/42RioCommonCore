/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 00:03:02 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 00:57:52 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	if (!dst || !src)
		return (0);
	len = 0;
	while (dst[len] && len < n)
		len++;
	i = -1;
	while ((++i + len) < n - 1 && src[i])
		dst[len + i] = src[i];
	if (len < n)
		dst[len] = 0;
	while (src[i])
		i++;
	return (len + ft_strlen(src));
}
