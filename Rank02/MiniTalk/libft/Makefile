# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/27 18:27:44 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/27 20:07:10 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= libft.a

C_COMP	= cc
C_FLAG	= -Wall -Wextra -Werror
C_ARRC	= ar -rc
C_REMO	= rm -rf

F_SRCS	= ft_isalpha.c		\
	ft_isdigit.c		\
	ft_isalnum.c		\
	ft_isascii.c		\
	ft_isprint.c		\
	ft_strlen.c		\
	ft_memset.c		\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c		\
	ft_strrchr.c		\
	ft_strncmp.c		\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strnstr.c		\
	ft_atoi.c		\
	ft_calloc.c		\
	ft_strdup.c		\
	ft_substr.c		\
	ft_strjoin.c		\
	ft_strtrim.c		\
	ft_split.c		\
	ft_itoa.c		\
	ft_strmapi.c		\
	ft_striteri.c		\
	ft_putchar_fd.c		\
	ft_putstr_fd.c		\
	ft_putendl_fd.c		\
	ft_putnbr_fd.c		\

B_SRCS	= ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c	\
	ft_lstlast_bonus.c	\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c	\
	ft_lstiter_bonus.c	\
	ft_lstmap_bonus.c	\

F_OBJS	= $(F_SRCS:.c=.o)
B_OBJS	= $(B_SRCS:.c=.o)

all	: ${NAME}

.c.o	:
	${C_COMP} ${C_FLAG} -c $< -o $@

${NAME}	: ${F_OBJS}
	${C_ARRC} ${NAME} ${F_OBJS}

bonus	: ${F_OBJS} ${B_OBJS}
	${C_ARRC} ${NAME} $+

clean:
	${C_REMO} ${F_OBJS} ${B_OBJS}

fclean	: clean
	${C_REMO} ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
