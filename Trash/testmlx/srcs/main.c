/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/23 19:04:28 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/24 19:14:53 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#include "mlx.h"
//#include "../minilibx-linux/mlx.h"

int	main(void)
{
	void	*mlx;
//	void	*mlx_win;

	mlx = mlx_init();
//	mlx_win = mlx_new_window(mlx, 1920, 1080, "Hello world!");
	mlx_loop(mlx);
	return (0);
}
