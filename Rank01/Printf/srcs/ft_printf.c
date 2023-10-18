/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 16:41:44 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 21:24:56 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int	i;
	int	p_len;
	va_list	args;

	i = -1;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			p_len += ft_ftypes(args, str[++i]);
		else
			p_len += ft_printchar(str[i]);
	}
	va_end(args);
	return (0);
}
