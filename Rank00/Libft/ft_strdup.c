/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/12 18:26:53 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/14 00:29:46 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strdup(char *src)
{
	int		    i;
	char    *dest;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(sizeof(char) * (i + 1));
	if (!(dest))
		return (NULL);
	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = 0;
	return (dest);
}
