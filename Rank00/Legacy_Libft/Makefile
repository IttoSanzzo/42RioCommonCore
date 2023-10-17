# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/12 17:59:51 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/17 20:26:07 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= libft.a

C_COMP	= cc
C_FLAGS	= -Wall -Wextra -Werror
C_ARRC	= ar rcs
C_REMO	= rm -rf

N_SRCS	=	ft_isalpha.c		\
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
		ft_putnbr_fd.c
F_SRCS	= ${N_SRCS}

F_OBJS	= ${F_SRCS:.c=.o}

%.o	: %.c
	${C_COMP} ${C_FLAGS} -c $< -o $@

${NAME}	: ${F_OBJS}
	${C_ARRC} $@ $^

all	: ${NAME}

clean	:
	${C_REMO} ${F_OBJS}

fclean	: clean
	${C_REMO} ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
