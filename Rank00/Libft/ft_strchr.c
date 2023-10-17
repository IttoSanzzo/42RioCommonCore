/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:37:15 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:37:43 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && *s != (unsigned char)c)
	{
		s++;
	}
	if (*s == (unsigned char) c)
	{
		return ((char *)s);
	}
	return (NULL);
}
