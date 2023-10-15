/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/14 23:49:22 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 00:55:02 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = -1;
	while (++i < n - 1 && src[i])
		dst[i] = src[i];
	if (i < n)
		dst[i] = 0;
	while (src[i])
		i++;
	return (i);
}
