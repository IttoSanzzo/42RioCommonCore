# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/26 19:20:16 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/12/04 15:40:15 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Comamad Miscs

NAME	= minishell
LIBFT	= libft
C_COMP	= cc
C_FLAG	= -Wall -Werror -Wextra
C_REMO	= rm -rf

# Dirs

D_HDRS	= -I ./includes/
D_LBFT	= ./libft/
D_SRCS	= src/
D_OBJS	= objs/

# Sources & Objects

N_MAIN	= $(shell ls $(D_SRCS)/main/ | grep -E ".+\.c")
N_BLTN	= $(shell ls $(D_SRCS)/builtins/ | grep -E ".+\.c")
	
F_SRCS	= $(addprefix $(D_SRCS)/main/, $(N_MAIN))	\
	$(addprefix $(D_SRCS)/builtins/, $(N_BLTN))	\

N_OBJS	= $(N_MAIN:.c=.o)	\
	$(N_BLTN:.c=.o)		\

F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

# Libft

N_LBFT	= libft.a
F_LBFT	= $(addprefix $(D_LBFT), $(N_LBFT))

# Mandatory Rules

all		: $(NAME) 

$(NAME)		: $(F_LBFT) $(D_OBJS) $(F_OBJS)
	$(C_COMP) $(C_FLAG) -o $@ $(F_OBJS) $(F_LBFT)

$(D_OBJS)%.o	: $(D_SRCS)/*/%.c
	$(C_COMP) $(C_FLAG) $(D_HDRS) -c $< -o $@

$(D_OBJS)	:
	mkdir $(D_OBJS)

$(F_LBFT)	:
	$(MAKE) --no-print-directory -C $(D_LBFT)

clean		:
	$(MAKE) clean -C $(D_LBFT)
	${C_REMO} $(D_OBJS)

fclean		:
	$(MAKE) fclean -C $(D_LBFT)
	${C_REMO} $(D_OBJS)
	${C_REMO} $(NAME)

re		: fclean all

# Phony

.PHONY: all clean fclean re
