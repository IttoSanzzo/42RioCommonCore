/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/11/26 19:44:58 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/11/26 19:52:31 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// Includes..:

# include <stdef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// Struct Define..:

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

//// Source Functions..:
// main.c

// 

#endif
