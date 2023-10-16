/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 18:20:00 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/16 01:05:25 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_s1;
	unsigned char	*s_s2;
	size_t			i;

	s_s1 = (unsigned char *)s1;
	s_s2 = (unsigned char *)s2;
	i = -1;
	while (++i < n)
		if (s_s1[i] != s_s2[i])
			return (s_s1[i] - s_s2[i]);
	return (0);
}
