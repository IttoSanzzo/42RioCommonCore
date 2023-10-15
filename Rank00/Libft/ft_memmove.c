/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/14 23:23:42 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 00:49:15 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	if (!dst || !src)
		return (NULL);
	i = -1;
	if (dst > src)
	{
		i = n;
		while (--i >= 0)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	else
		while (++i < (int)n)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);
}
