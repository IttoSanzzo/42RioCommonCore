/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_ansi_dfd.c                                      :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/27 20:55:14 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/31 02:57:29 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_ansi_dfd(void)
{
	ft_putstr("\e[1;1H\e[2J\e[3J");
}
