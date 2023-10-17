/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:42:33 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:42:37 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	sup;

	if (ft_strlen(little) == 0)
	{
		return ((char *)big);
	}
	index = 0;
	while (big[index] != '\0' && index < len)
	{
		sup = 0;
		while ((big[index + sup] == little[sup]) && (index + sup) < len)
		{
			if (little[sup + 1] == '\0')
				return ((char *)&big[index]);
			sup++;
		}
		index++;
	}
	return (NULL);
}
