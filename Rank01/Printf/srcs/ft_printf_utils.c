/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 17:31:07 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 17:32:37 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_lputchar(int c, int *len)
{
	write(1, &c, 1);
	*len += 1;
}
