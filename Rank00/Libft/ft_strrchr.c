/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 17:31:31 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 18:01:34 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != c && i >= 0)
		i--;
	if (s[i] == c)
		return ((char *)s + i);
	return (NULL);
}
