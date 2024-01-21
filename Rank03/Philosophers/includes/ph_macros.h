/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ph_macros.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 22:01:56 by marcosv2          #+#    #+#             */
/*   Updated: 2024/01/21 18:08:47 by marcosv2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PH_MACROS_H
# define PH_MACROS_H 

// States
# define MSS_FORK		" has taken a fork"
# define MSS_EATING 	" is eating"
# define MSS_SLEEPING	" is sleeping"
# define MSS_THINKING	" is thinking"
# define MSS_DIED		" died"

// Errors
# define ERR_IN_1		"INVALID INPUT CHARACTER"
# define ERR_IN_2		"INVALID INPUT VALUES"
# define ERR_ALLOC_1	"ERROR WHILE ALLOCATING THREADS IDs"
# define ERR_ALLOC_3	"ERROR WHILE ALLOCATING PHILOS"
# define ERR_ALLOC_2	"ERROR WHILE ALLOCATING FORKS"
# define ERR_TH			"ERROR WHILE CREATING THREADS"
# define ERR_JOIN		"ERROR WHILE JOINING THREADS"
# define ERR_INIT		"ERROR WHILE INIT FORKS"
# define ERR_TIME		"UNABLE TO RETRIVE UTC"

#endif