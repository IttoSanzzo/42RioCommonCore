/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:38:09 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:38:13 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	indice;

	indice = 0;
	while (s[indice] != '\0')
	{
		(*f)(indice, &s[indice]);
		indice++;
	}
}
