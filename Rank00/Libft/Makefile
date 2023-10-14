# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/12 17:59:51 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/14 16:35:15 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME	= libft.a

C_COMP	= cc
C_FLAGS	= -Wall -Wextra -Werror
C_ARRC	= ar rcs
C_RLIB	= runlib

D_HDRS	= ./
F_HDRS	= libft.h

N_SRCS	=	ft_isalpha.c		\
		ft_aisdigit.c		\
		ft_aisalnum.c		\
		ft_aisascii.c		\
		ft_aisprint.c		\
		ft_astrlen.c		\
		ft_amemset.c		\
		ft_abzero.c		\
		ft_amemcpy.c		\
		ft_amemmove.c		\
		ft_astrlcpy.c		\
		ft_astrlcat.c		\
		ft_atoupper.c		\
		ft_atolower.c		\
		ft_astrchr.c		\
		ft_astrrchr.c		\
		ft_astrncmp.c		\
		ft_amemchr.c		\
		ft_amemcmp.c		\
		ft_astrnstr.c		\
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
		ft_lstnew.c		\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap
D_SRCS	=	./
F_SRCS	= $(addprefix ${D_SRCS}, ${N_SRCS})

D_OBJS	= ./
F_OBJS	= ${F_SRCS:.c=.o}

.c.o	:
	${C_COMP} ${C_FLAGS} -I ${D_HDRS} -c $< -o ${$<:.c=.o}

${NAME}	: ${F_OBJS}
	${C_ARRC} ${NAME} ${F_OBJS}

all	: ${NAME}

clean	:
	rm -f ${F_OBJS}

fclean	: clean
	rm -f ${NAME}

re	: fclean all

.PHONY	: all clean fclean re
