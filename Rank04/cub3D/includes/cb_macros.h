/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_macros.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:06 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/23 13:41:30 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CB_MACROS_H
# define CB_MACROS_H

// Errors
# define ERR_MSS_N "\033[38;5;196mError\033[0m"
# define ERR_MSS_AC "Wrong argument count... \"./cub3D <map_file>\""
# define ERR_MSS_CUB "Wrong file type... \"*.cub\""
# define ERR_MSS_FNF "File not found or missing permissions..."
# define ERR_MSS_MEL "There are empty lines in the map layout!"
# define ERR_MSS_NVM "There's no valid map in the .cub file!"
# define ERR_MSS_IEL "There are invalid elements in the .cub file!"
# define ERR_MSS_DEL "There are repeated elements in the .cub file!"
# define ERR_MSS_IRV "There's a invalid rgb value in the .cub file!"
# define ERR_MSS_MEV "There's element without any value in the .cub file!"
# define ERR_MSS_TNF "Texture file not found or missing permissions..."
# define ERR_MSS_XPM "Wrong texture file type... \"*.xpm\""
# define ERR_MSS_IMO "Invalid character in map!"
# define ERR_MSS_MSP "There are multiple start points in the map!"
# define ERR_MSS_NSP "There'a no start point in the map!"
# define ERR_MSS_OWL "There'a open wall in the map!"
# define ERR_MSS_XINIT "There was a problem starting mlx"
# define ERR_MSS_FXPM "There was a .xpm loading issue."

// Defaults
# define DEF_TX_NO "./assets/wall_no.xpm"
# define DEF_TX_EA "./assets/wall_ea.xpm"
# define DEF_TX_SO "./assets/wall_so.xpm"
# define DEF_TX_WE "./assets/wall_we.xpm"
# define DEF_C_R 10
# define DEF_C_G 95
# define DEF_C_B 250
# define DEF_F_R 100
# define DEF_F_G 100
# define DEF_F_B 100
# define ICOL 0xff0000

// Tweakable Values
# define PI 3.14159265359
# define PL 1.57079632679
# define PR 4.71238898038
# define DR 0.0174533
# define DS_DEF 1000000
# define MRD 8
# define RAYS 60
# define MAP_S 64
# define WALL_S 320
# define M_WO 20
# define K_MS 0.45
# define K_LS 0.01

// Window Aspects
# define W_NAME "cub3D"
# define W_WIDE 1024
# define W_HIGH 512

// STRCMPS
# define MAP_VALID " 01NEWS"
# define POV_ORIEN "NEWS"

#endif