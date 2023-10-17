/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:32:32 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:32:35 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;

	if (!dest && !src)
	{
		return (0);
	}
	index = 0;
	while (index < n)
	{
		((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
		index++;
	}
	return (dest);
}
