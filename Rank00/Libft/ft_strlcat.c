/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:43:52 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 20:44:23 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	src_len;
	size_t	dst_len;
	size_t	result;

	count = 0;
	if (size <= 0 && !src)
		return (0);
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	result = dst_len + src_len;
	while (src[count] && dst_len < size - 1)
	{
		dst[dst_len] = src[count];
		count++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (result);
}
