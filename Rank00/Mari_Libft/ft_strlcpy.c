/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:39:35 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:40:00 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len_src;

	len_src = ft_strlen(src);
	if (size == 0)
	{
		return (len_src);
	}
	index = 0;
	while (index < (size - 1) && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (len_src);
}
