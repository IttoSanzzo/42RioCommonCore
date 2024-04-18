/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:14:14 by marcosv2          #+#    #+#             */
/*   Updated: 2024/04/17 23:03:27 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUBE_H
# define CUBE_H

/// Includes
# include "../libft/includes/libft.h"
# include "./cb_macros.h"
# include "./cb_structs.h"
# include <unistd.h>

//// cb_main
// main.c
int		main(int ac, char *av[]);
// cb_init.c
void	cb_base_init(t_data *data);
// cb_exit.c
void	cb_exit(int exit_value);

//// cb_parse
// cb_arguments.c
void	cb_arguments(t_data *data, char *file);
void	cb_base_format_import(t_data *data);

//// cb_utils
t_data	*cb_get_data(t_data *data);
void	cb_error(char *error);

#endif