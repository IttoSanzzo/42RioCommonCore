/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cb_macros.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:22:06 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/19 10:59:33 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CB_MACROS_H
# define CB_MACROS_H

// Errors
# define ERR_MSS_N "\033[38;5;196mError\033[0m"
# define ERR_MSS_AC "Wrong argument count... \"./cub3D <map_file>\""
# define ERR_MSS_CUB "Wrong file type... \"*.cub\""
# define ERR_MSS_NF "File not found or missing permissions..."
# define ERR_MSS_NVM "There's no valid map in the .cub file!"

// Defaults
# define DEF_TX_NO "./assets/wall_no.xpm"
# define DEF_TX_EA "./assets/wall_ea.xpm"
# define DEF_TX_SO "./assets/wall_so.xpm"
# define DEF_TX_WE "./assets/wall_we.xpm"
# define DEF_C_R 255
# define DEF_C_G 255
# define DEF_C_B 255
# define DEF_F_R 255
# define DEF_F_G 255
# define DEF_F_B 255

#endif