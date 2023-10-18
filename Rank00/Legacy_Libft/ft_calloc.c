/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 19:00:07 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 21:18:56 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if ((int)count < 0 && (int)size < 0)
		return (NULL);
	count = count * ((int)count != 0) + 1 * ((int)count == 0 && (int)size < 0);
	size = size * ((int)size != 0) + 1 * ((int)size == 0 && (int)count < 0);
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}
