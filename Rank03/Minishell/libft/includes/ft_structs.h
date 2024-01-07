/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   ft_structs.h                                       :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2024/01/07 01:27:16 by marcosv2	       #+#    #+#	      */
/*   Updated: 2024/01/07 01:29:40 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef FT_STRUCTS_H
# define FT_STRUCTS_H

// Struct Define
typedef struct s_list
{
	void			*val;
	struct s_list	*next;
}	t_list;

typedef struct s_clist
{
	char			val;
	struct s_clist	*next;
}	t_clist;

typedef struct s_readline
{
	int				home[2];
	int				end[2];
	int				move;
	int				hlen;
	int				hpos;
	int				spos;
	int				vpos;
	int				pos;
	int				len;
	char			**his;
	char			*prompt;
	char			ch;
	struct s_clist	*line;
	struct s_clist	*buffer;
}	t_readline;

#endif
