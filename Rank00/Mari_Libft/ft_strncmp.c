/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:42:03 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:42:05 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[index] != '\0' && s2[index] != '\0')
		&& s1[index] == s2[index] && index < n - 1)
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
