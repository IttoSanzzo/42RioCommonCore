# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/26 19:20:16 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/12/04 15:07:11 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Comamad Miscs

NAME	= minishell
LIBFT	= libft
C_COMP	= cc
C_FLAG	= -Wall -Werror -Wextra
C_REMO	= rm -rf

# Sources & Objects

D_HDRS	= -I ./includes/
D_LBFT	= ./libft/
D_SRCS	= src/
D_OBJS	= objs/

N_ROOT	= $(shell ls src/main | grep -E ".+\.c")
N_BLTN	= $(shell ls src/builtins | grep -E ".+\.c")

F_SRCS	= $(addprefix $(D_SRCS), $(N_SRCS))
N_OBJS	= $(N_SRCS:.c=.o)
F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

N_LBFT	= libft.a
F_LBFT	= $(addprefix $(D_LBFT), $(N_LBFT))

# Mandatory Rules

all		: $(NAME) 

$(D_OBJS)%.o	: $(D_SRCS)%.c
	$(C_COMP) $(C_FLAG) -c $< $(F_LBFT) -o $@ $(D_HDRS)

$(D_OBJS)	:
	mkdir $(D_OBJS)

$(NAME)		: $(F_LBFT) $(D_OBJS) $(F_OBJS)
	$(C_COMP) $(C_FLAG) $(F_OBJS) $(F_LBFT) -o $@

$(F_LBFT)	:
	$(MAKE) --no-print-directory -C $(D_LBFT)

clean		:
	$(MAKE) clean -C $(D_LBFT)
	${C_REMO} $(D_OBJS)

fclean		: clean
	$(MAKE) fclean -C $(D_LBFT)
	${C_REMO} $(NAME)

re		: fclean all

# Phony

.PHONY: all clean fclean re
