/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:37:37 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:37:40 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		index;
	int		size;
	char	*s2;

	size = ft_strlen(s1);
	s2 = malloc (sizeof(char ) * (size + 1));
	index = 0;
	while (s1[index] != '\0')
	{
		s2[index] = s1[index];
		index++;
	}
	s2[index] = '\0';
	return (s2);
}
