/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 19:00:07 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 19:07:33 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*dst;

	dst = malloc(size * count);
	if (!dst)
		return (NULL);
	ft_memset(dst, 0, size * count);
	return (dst);
}
