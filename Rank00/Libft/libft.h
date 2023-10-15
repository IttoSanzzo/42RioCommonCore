/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/13 00:01:56 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/15 00:57:04 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Lib Includes
# include <stdlib.h>
# include <unistd.h>

//// Libft Basic Function
// ft_basic_one
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *str, int c, size_t n);
// ft_basic_two
void	ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
void	ft_toupper(void);
// ft_basic_three
void	ft_tolower(void);
void	ft_strchr(void);
void	ft_strrchr(void);
void	ft_strncmp(void);
void	ft_memchr(void);
// ft_basic_four
void	ft_memcmp(void);
void	ft_strnstr(void);
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
