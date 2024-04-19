/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:14:14 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/19 17:14:11 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

/// Includes
# include "../libft/includes/libft.h"
# include "./cb_macros.h"
# include "./cb_structs.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

//// cb_main
int		main(int ac, char *av[]);
void	cb_base_init(t_data *data);
void	cb_exit(int exit_value);

//// cb_parse
void	cb_arguments(t_data *data, char *file);
void	cb_base_format_import(t_data *data);
void	cb_parse_elements(t_data *data);
void	cb_parse_map(t_data *data);
void	cb_layout_to_map(char **tab, t_map *map);

//// cb_utils
t_data	*cb_get_data(t_data *data);
void	cb_error(char *error);

#endif