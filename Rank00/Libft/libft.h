/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/13 00:01:56 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/14 16:41:20 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Lib Includes
# include <stdlib.h>
# include <unistd.h>

//// Libft Basic Function
// ft_basic_one
void	tt_ft_aisdigit(void);
void	tt_ft_aisalnum(void);
void	tt_ft_aisascii(void);
void	tt_ft_aisprint(void);
void	tt_ft_astrlen(void);
void	tt_ft_amemset(void);
// ft_basic_two
void	tt_ft_abzero(void);
void	tt_ft_amemcpy(void);
void	tt_ft_amemmove(void);
void	tt_ft_astrlcpy(void);
void	tt_ft_astrlcat(void);
void	tt_ft_atoupper(void);
// ft_basic_three
void	tt_ft_atolower(void);
void	tt_ft_astrchr(void);
void	tt_ft_astrrchr(void);
void	tt_ft_astrncmp(void);
void	tt_ft_amemchr(void);
// ft_basic_four
void	tt_ft_amemcmp(void);
void	tt_ft_astrnstr(void);
void	tt_ft_atoi(void);
void	tt_ft_calloc(void);
char	*ft_strdup(char *src);
//// Libft Additional Functions
// ft_additional_one
void	tt_ft_substr(void);
void	tt_ft_strjoin(void);
void	tt_ft_strtrim(void);
void	tt_ft_split(void);
void	tt_ft_itoa(void);
// ft_additional_two
void	tt_ft_strmapi(void);
void	tt_ft_striteri(void);
void	tt_ft_putchar_fd(void);
void	tt_ft_putstr_fd(void);
void	tt_ft_putendl_fd(void);
void	tt_ft_putnbr_fd(void);

//// Libft Bonus
void	ft_ft_lstnew(void);
void	ft_ft_lstadd_front(void);
void	tt_ft_lstsize(void);
void	tt_ft_lstlast(void);
void	tt_ft_lstadd_back(void);
void	tt_ft_lstdelone(void);
void	tt_ft_lstclear(void);
void	tt_ft_lstiter(void);
void	tt_ft_lstmap(void);

#endif
