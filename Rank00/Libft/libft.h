/* ************************************************************************** */
/*									      */
/*							  :::	   ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*						      +:+ +:+	      +:+     */
/*   By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	      */
/*						  +#+#+#+#+#+	+#+	      */
/*   Created: 2023/10/17 14:25:14 by marcosv2	       #+#    #+#	      */
/*   Updated: 2023/10/17 14:25:21 by marcosv2         ###   ########.fr       */
/*									      */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h> // write
# include <stdlib.h> // malloc free size_t

//chars
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);

//strings
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *str, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));

//conversions
int			ft_atoi(const char *nptr);
char		*ft_itoa(int n);

//memory
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memset(void *str, int c, size_t len);
void		*ft_memmove(void *dest, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_calloc(size_t nitems, size_t size);
char		*ft_strdup(const char *s1);

//file descriptor
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
