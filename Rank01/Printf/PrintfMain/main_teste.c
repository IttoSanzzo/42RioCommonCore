/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main_teste.c                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/19 14:47:02 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/19 17:40:33 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static void	ft_putstr(char *str)
{
	while (*str)
		write(1, &*str++, 1);
}

int	main(int argc, char *argv[])
{
	int	len;

	(void)argc;
	(void)argv;
	printf("pointer..: |%p %p| \n\n", NULL, NULL);
	ft_putstr("pointer..: |");
	len = ft_printf("%p %p", NULL, NULL);
	ft_putstr("|");
	printf("\n\n\nPrint Length..: %d\n\n", len);
	return (0);
}
