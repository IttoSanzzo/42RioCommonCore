/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ph_exit.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: marcosv2 <marcosv2@student.42.rio>		 +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/01/21 16:51:49 by marcosv2		  #+#	#+#			 */
/*   Updated: 2024/01/21 16:57:57 by marcosv2		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "philo.h"

int	ph_error(t_info *info, char *err)
{
	ft_putendl(err, STDERR_FILENO);
	if (info)
		ph_free_all(info);
	return (1);
}

void	ph_free_all(t_info *info)
{
	return ;
}
