/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strchp.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/16 16:32:05 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/16 16:56:53 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

int	ft_strchp(char *s, char c)
{
	int	i;

	i = -1;
	if (!s)
		return (-1);
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (-1);
}
