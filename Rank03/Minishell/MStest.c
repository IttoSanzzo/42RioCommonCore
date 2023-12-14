/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   MStest.c                                           :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/13 00:11:24 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/13 00:13:58 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft/includes/libft.h"

int	main(int argc, char **argv, char **envp)
{
	int	i;

	i = -1;
	while (argv[++i])
		ft_printf("Argv..: |%s|\n", argv[i]);
	ft_printf("\n\n");
	i = -1;
	while (envp[++i])
		ft_printf("Envp..: |%s|\n", envp[i]);
	return (0);
}
