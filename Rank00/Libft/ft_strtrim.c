/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 19:49:00 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 20:04:09 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*dst;

	dst = 0;
	if (!s1 && !set)
	{
		i = 0;
		j = ft_strlen(s1);
		while (s1[i] && ft_strchr(set, s1[i]))
			i++;
		while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
			j--;
		dst = (char *)malloc(sizeof(char) * (j - i + 1));
		if (dst)
			ft_strlcpy(dst, &s1[i], j - i + 1);
	}
	return (dst);
}
