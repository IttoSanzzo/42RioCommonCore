/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 18:07:53 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 19:54:14 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i] && i < n)
		i++;
	if (str[i] == c)
		return ((char *)s + i);
	return (NULL);
}
