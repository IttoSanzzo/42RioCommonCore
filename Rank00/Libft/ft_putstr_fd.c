/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/27 20:37:14 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/27 20:38:11 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s)
		write(fd, &*s++, 1);
}
