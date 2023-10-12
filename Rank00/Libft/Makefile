# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/12 17:59:51 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/12 18:27:49 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= libft.a

C_COMP	= cc
C_FLAGS	= -Wall -Wextra -Werror
C_ARRC	= ar rc
C_RLIB	= runlib

D_HDRS	= ./
F_HDRS	= libft.h

N_SRCS	=	ft_strdup	\
		ft_isalpha
D_SRCS	=	./
F_SRCS	= $(addprefix ${D_SRCS}, ${N_SRCS})

D_OBJS	= ./
F_OBJS	= ${F_SRCS:.c=.o}

.c.o	:
	${C_COMP} ${C_FLAGS} -I ${D_HDRS} -c $< -o ${$<:.c=.o}

${NAME}	: ${F_OBJS}
	${C_ARRC} ${NAME} ${F_OBJS}
	${C_RLIB} ${NAME}

all	: ${NAME}

clean	:
	rm -f ${F_OBJS}

fclean	: clean
	rm -f ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
