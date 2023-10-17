/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 21:58:52 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 22:32:36 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dst;

	if (!s || !f)
		return (NULL);
	dst = ft_strdup((char *)s);
	if (!dst)
		return (NULL);
	i = -1;
	while (dst[++i])
		dst[i] = f(i, dst[i]);
	return (dst);
}
