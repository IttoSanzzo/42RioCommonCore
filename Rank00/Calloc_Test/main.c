/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 17:38:58 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/30 13:18:41 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */
/*
#include "../Legacy_Libft/libft.h"
#include <stdlib.h>

static void	ft_free(char *str)
{
	if (!str)
		ft_putstr_fd("nil\n", 1);
	else
		ft_putstr_fd("Chariot\n", 1);
	if (str)
		free(str);
}

int	main(int argc, char *argv[])
{
	char	*str;

	if (argc == 3)
	{
		str = ft_calloc(atoi(argv[1]), atoi(argv[2]));
		ft_free(str);
		str= calloc(atoi(argv[1]), atoi(argv[2]));
		ft_free(str);
	}
	return (0);
}
*/
