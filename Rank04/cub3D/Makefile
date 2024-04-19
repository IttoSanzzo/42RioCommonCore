# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 21:52:16 by marcosv2          #+#    #+#              #
#    Updated: 2024/04/19 11:42:29 by marcosv2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Comamad Miscs

NAME	= cub3D
LIBFT	= libft
MAKE	= make
C_COMP	= cc
C_FLAG	= -Wall -Werror -Wextra
C_REMO	= rm -rf
C_MDIR	= mkdir -p
C_PUTS	= printf

# Dirs

D_HDRS	= -I ./includes/
D_LBFT	= ./libft/
D_SRCS	= srcs/
D_OBJS	= objs/

# Sources & Objects

DS_MAIN	=	cb_main/
DS_PARS	=	cb_parse/
DS_UTIL	=	cb_utils/

N_MAIN	=	main.c				\
			cb_init.c			\
			cb_exit.c
N_PARS	=	cb_arguments.c		\
			cb_base_format.c	\
			cb_parse_elements.c
N_UTIL	=	cb_get_data.c		\
			cb_error.c

F_SRCS	= $(addprefix $(D_SRCS)$(DS_MAIN), $(N_MAIN))
F_SRCS	+= $(addprefix $(D_SRCS)$(DS_PARS), $(N_PARS))
F_SRCS	+= $(addprefix $(D_SRCS)$(DS_UTIL), $(N_UTIL))

#F_SRCS	+= $(addprefix $(D_SRCS)$(DS_), $(N_))

N_OBJS	=	$(N_MAIN:.c=.o)	\
			$(N_PARS:.c=.o)	\
			$(N_UTIL:.c=.o)
F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

# Libft

N_LBFT	= libft.a
F_LBFT	= $(addprefix $(D_LBFT), $(N_LBFT))

# Colors
P_WHITE = \033[0m
P_LBLUE = \033[38;5;32m
P_DBLUE = \033[38;5;21m
P_PRPLE = \033[38;5;93m
P_NCYAN = \033[38;5;37m
P_MAGEN = \033[38;5;99m
P_GREEN = \033[38;5;40m
P_LGREN = \033[38;5;42m
P_NWINE = \033[38;5;88m

# Mandatory Rules

all		: $(NAME)

$(NAME)		: $(F_LBFT) $(D_OBJS) $(F_OBJS)
	@$(C_PUTS) "\n\t$(P_NCYAN)Finishing binary..: $(P_LBLUE)$(NAME)$(P_WHITE)\n"
	@$(C_COMP) $(C_FLAG) -o $@ $(F_OBJS) $(F_LBFT)
	@$(C_PUTS) "$(P_GREEN)Done!$(P_WHITE)\n"

$(D_OBJS)%.o	: $(D_SRCS)*/%.c
	@$(C_PUTS) "\t$(P_PRPLE)Generating $(NAME)..: %-33.33s\r $(P_WHITE)" $@
	@$(C_COMP) $(C_FLAG) $(D_HDRS) -c $< -o $@ $(C_RDLN)

$(D_OBJS)	:
	@$(C_PUTS) "$(P_LGREN)Starting $(NAME) compilation...$(P_WHITE)"
	@$(C_PUTS) "\n\t$(P_MAGEN)Creating $(NAME) objects directory...$(P_WHITE)\n"
	@$(C_MDIR) $(D_OBJS)

$(F_LBFT)	:
	@clear
	@$(MAKE) --no-print-directory -C $(D_LBFT)

clean		:
	@$(MAKE) clean --no-print-directory -C $(D_LBFT)
	@$(C_PUTS) "$(P_NWINE)Cleaning $(NAME) objects...$(P_WHITE)\n"
	@${C_REMO} $(D_OBJS)

fclean		:
	@$(MAKE) fclean --no-print-directory -C $(D_LBFT)
	@$(C_PUTS) "$(P_NWINE)Cleaning $(NAME) objects...$(P_WHITE)\n"
	@${C_REMO} $(D_OBJS)
	@$(C_PUTS) "$(P_NWINE)Deleting $(NAME)...$(P_WHITE)\n"
	@${C_REMO} $(NAME)

re		: fclean all

# Test

val		:
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

uplibft	:
	@rm -rf ./libft/
	@git clone git@github.com:IttoSanzzo/libft.git
	@rm -rf ./libft/.git

# Phony

.PHONY: all clean fclean re val uplibft
