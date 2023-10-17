/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:32:56 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:32:59 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*source;
	char	*destiny;
	size_t	index;

	source = (char *)src;
	destiny = (char *)dest;
	index = 0;
	if (source > destiny)
	{
		while (index < len)
		{
			destiny[index] = source[index];
			index++;
		}
	}
	else
	{
		while (index != len)
		{
			destiny[len - index - 1] = source[len - index - 1];
			index++;
		}
	}
	return (dest);
}
