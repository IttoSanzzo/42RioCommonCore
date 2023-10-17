/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:31:58 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:32:15 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s_s1;
	const unsigned char	*s_s2;
	size_t				index;

	index = 0;
	s_s1 = (const unsigned char *)s1;
	s_s2 = (const unsigned char *)s2;
	while (index < n)
	{
		if (s_s1[index] != s_s2[index])
		{
			return (s_s1[index] - s_s2[index]);
		}
		index++;
	}
	return (0);
}
