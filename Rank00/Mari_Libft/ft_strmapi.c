/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:41:33 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:41:36 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	indice;
	unsigned int	length;
	char			*str;

	length = ft_strlen(s);
	str = (char *)ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (0);
	indice = 0;
	while (s[indice] != '\0')
	{
		str[indice] = (*f)(indice, s[indice]);
		indice++;
	}
	return (str);
}
