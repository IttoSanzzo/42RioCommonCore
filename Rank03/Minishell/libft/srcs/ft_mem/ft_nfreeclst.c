/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_nfreeclst.c                                     :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/12/30 20:36:47 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/06 19:57:45 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "libft.h"

t_clist	*ft_nfreeclst(t_clist **mem)
{
	if (*mem)
	{
		free(*mem);
		*mem = NULL;
	}
	return (NULL);
}
