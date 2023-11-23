# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/23 19:23:59 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/11/23 20:04:50 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= test.out

C_COMP	= cc
C_FLAG	= -Wall -Wextra -Werror
C_MLBO	= -I/usr/include -Imlx_linux -O3
C_MLXB	= -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
C_REMO	= rm -rf

N_SRCS	= main.c	\
	ft_utils.c	\

D_SRCS	= ./srcs/
F_SRCS	= $(addprefix ${D_SRCS}, ${N_SRCS})

F_OBJS	= $(F_SRCS:.c=.o)

%.o	: %.c
	${C_COMP} ${C_FLAG} ${C_MLXO} -c $< -o $@

all	: ${NAME}

${NAME}	: ${F_OBJS}
	${C_COMP} ${C_FLAG} ${F_OBJS} ${C_MLXB} -o ${NAME}
#	${C_COMP} ${C_FLAG} ${N_OBJS} -o ${NAME}

clean	:
	${C_REMO} ${F_OBJS}

fclean	: clean
	${C_REMO} ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
