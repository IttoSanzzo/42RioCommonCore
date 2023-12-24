/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_puttab.c                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/20 14:44:50 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/12/20 14:59:42 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

void	ft_puttab(char **tab, char *prompt)
{
	int	i;

	i = -1;
	while (tab[++i])
	{
		if (prompt)
			ft_putstr(prompt);
		ft_putendl_fd(tab[i], 1);
	}
}
