/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:01:56 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 17:55:54 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H 

// includes
# include "ph_includes.h"
# include "ph_macros.h"
# include "ph_structs.h"

// ph_exit.c
int		ph_error(t_info *info, char *mss);
void	ph_free_all(t_info *info);

// ft_utils.c
int		ft_atoi(const char *nptr);
void	ft_putstr(char *s);
void	ft_putendl_fd(char *s, int fd);

#endif