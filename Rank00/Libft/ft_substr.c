/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:43:50 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:43:53 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		str = (char *)malloc(sizeof(*s));
		str[0] = '\0';
		return (str);
	}
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *)malloc(len + 1);
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}
