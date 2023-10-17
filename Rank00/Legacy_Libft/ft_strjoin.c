/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/15 19:38:32 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/16 01:13:24 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dst)
		return (NULL);
	j = 0;
	i = -1;
	while (s1[++i] != 0)
		dst[j++] = s1[i];
	i = -1;
	while (s2[++i] != 0)
		dst[j++] = s2[i];
	dst[j] = 0;
	return (dst);
}
