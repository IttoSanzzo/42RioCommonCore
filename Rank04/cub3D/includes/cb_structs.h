/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_structs.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:18:57 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/22 01:46:34 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CB_STRUCTS_H
# define CB_STRUCTS_H

/// Structs

typedef struct s_mlx
{
	void	*con;
	void	*win;
}	t_mlx;

typedef struct s_img
{
	int		sx;
	int		sy;
	int		line_len;
	int		endian;
	int		bpp;
	char	*addr;
	void	*ptr;
}	t_img;

typedef struct s_textures
{
	int		f_lock;
	int		c_lock;
	int		f_cl[3];
	int		c_cl[3];
	char	*no_t;
	char	*ea_t;
	char	*so_t;
	char	*we_t;
}	t_textures;

typedef struct s_assets
{
	int		f_cl;
	int		c_cl;
	t_img	no_t;
	t_img	ea_t;
	t_img	so_t;
	t_img	we_t;
}	t_assets;

typedef struct s_keys
{
	int	k_w;
	int	k_a;
	int	k_s;
	int	k_d;
	int	k_l;
	int	k_r;
}	t_keys;

typedef struct s_ray
{
	t_assets	assets;
	t_keys		keys;
	int			**layout;
	int			mlx;
	int			mly;
	float		pvx;
	float		pvy;
	float		pdx;
	float		pdy;
	float		pva;
}	t_ray;

typedef struct s_parse
{
	char	**elements;
	char	*istream;
	char	**import;
	char	**layout;
	char	**temp;
}	t_parse;

typedef struct s_data
{
	t_parse		parse;
	t_textures	tx;
	t_ray		ray;
	t_mlx		mlx;
	t_img		img;
}	t_data;

#endif