/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:34:40 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:34:43 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
	{
		write(fd, &s[index], 1);
		index++;
	}
	write(fd, "\n", 1);
}
