/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:43:05 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:43:07 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (index >= 0)
	{
		if (s[index] == (unsigned char)c)
		{
			return ((char *)&s[index]);
		}
		index--;
	}
	return (NULL);
}
