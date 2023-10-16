/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/14 22:39:12 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 23:47:36 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	while (n > 0)
		((unsigned char *)str)[--n] = c;
	return (str);
}
