# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/17 16:11:04 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/19 15:53:49 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= libftprintf.a

C_COMP	= cc
C_FLAG	= -Werror -Wextra -Wall
C_ARRC	= ar rcs

C_REMO	= rm -rf

D_HDRS	= ./includes/

N_SRCS	=	ft_printf.c		\
		ft_ftypes.c		\
		ft_printpercent.c	\
		ft_printchar.c		\
		ft_printstr.c		\
		ft_printnbr.c		\
		ft_printunsigned.c	\
		ft_printhex.c		\
		ft_printpointer.c	\
		ft_printf_utils.c	\

D_SRCS	=	./srcs/
F_SRCS	= $(addprefix ${D_SRCS}, ${N_SRCS})

F_OBJS	= ${F_SRCS:.c=.o}

%.o	: %.c
	${C_COMP} ${C_FLAG} -I ${D_HDRS} -c $< -o $@

${NAME}	: ${F_OBJS}
	${C_ARRC} ${NAME} ${F_OBJS}

all	: ${NAME}

clean	:
	${C_REMO} ${F_OBJS}

fclean	: clean
	${C_REMO} ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
