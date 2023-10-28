/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:46:23 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 20:46:25 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	v;
	size_t	i;
	size_t	little_len;
	char	*big_ptr;

	little_len = ft_strlen(little);
	big_ptr = (char *)big;
	if (big == little || little_len == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		v = 0;
		while (big[i + v] == little[v] && little[v]
			&& big[i + v] && i + v < len)
			v++;
		if (v == little_len)
			return (big_ptr + i);
		i++;
	}
	return (NULL);
}
