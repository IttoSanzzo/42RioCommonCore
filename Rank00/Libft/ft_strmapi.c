/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:45:26 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 20:45:29 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		count;

	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (NULL);
	count = 0;
	while (s[count])
	{
		new_str[count] = f(count, s[count]);
		count++;
	}
	new_str[count] = '\0';
	return (new_str);
}
