/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 19:00:07 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/16 18:36:54 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	if (count * size == 0 || count > 2147483647 / size)
		return (NULL);
	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}
