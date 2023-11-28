/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:29:16 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 20:30:59 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_ptr;
	char	*src_ptr;
	int		i;

	if (dst == src)
		return (dst);
	dst_ptr = (char *)dst;
	src_ptr = (char *)src;
	i = 0;
	while (n)
	{
		dst_ptr[i] = src_ptr[i];
		n--;
		i++;
	}
	return (dst_ptr);
}
