/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_structs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:18:57 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 20:46:17 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CB_STRUCTS_H
# define CB_STRUCTS_H

/// Structs

typedef struct s_mlx
{
	int		state;
}	t_mlx;

typedef struct s_textures
{
	int		f_cl[3];
	int		c_cl[3];
	char	*no_t;
	char	*ea_t;
	char	*so_t;
	char	*we_t;
}	t_textures;

typedef struct s_map
{
	char	**layout;
	int		pov_s[2];
	int		pov_o;
}	t_map;

typedef struct s_data
{
	t_textures	tx;
	t_map		map;
	t_mlx		mlx;
}	t_data;

#endif