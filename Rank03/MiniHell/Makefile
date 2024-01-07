# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/26 19:20:16 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/12/24 16:28:57 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Comamad Miscs

NAME	= minishell
LIBFT	= libft
MAKE	= make
C_COMP	= cc
C_FLAG	= -Wall -Werror -Wextra
C_REMO	= rm -rf

# Dirs

D_HDRS	= -I ./includes/
D_LBFT	= ./libft/
D_SRCS	= srcs/
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

# Colors
P_WHITE	= \033[0m
P_LBLUE	= \033[0;32m
P_DBLUE	= \033[0;34m
P_PRPLE	= \033[0;35m
P_NCYAN	= \033[0;36m
P_GREEN	= \033[38;5;40m

# Mandatory Rules

all		: $(NAME) 

$(NAME)		: $(F_LBFT) $(D_OBJS) $(F_OBJS)
	@echo "\n\t$(P_NCYAN)Finishing binary..: $(P_LBLUE)$(NAME)$(P_WHITE)\n"
	@$(C_COMP) $(C_FLAG) -o $@ $(F_OBJS) $(F_LBFT)
	@echo "$(P_GREEN)Done!$(P_WHITE)"

$(D_OBJS)%.o	: $(D_SRCS)/*/%.c
	@printf "\t$(P_PRPLE)Generating $(NAME)..: %-33.33s\r $(P_WHITE)" $@
	@$(C_COMP) $(C_FLAG) $(D_HDRS) -c $< -o $@

$(D_OBJS)	:
	@echo "$(P_LBLUE)Starting $(NAME) compilation...$(P_WHITE)"
	@echo "\n\t$(P_DBLUE)Creating $(NAME) objects directory...$(P_WHITE)"
	@mkdir $(D_OBJS)

$(F_LBFT)	:
	@clear
	@$(MAKE) --no-print-directory -C $(D_LBFT)

clean		:
	@$(MAKE) clean --no-print-directory -C $(D_LBFT)
	@echo "$(P_DBLUE)Cleaning $(NAME) objects...$(P_WHITE)"
	@${C_REMO} $(D_OBJS)

fclean		:
	@$(MAKE) fclean --no-print-directory -C $(D_LBFT)
	@echo "$(P_DBLUE)Cleaning $(NAME) objects...$(P_WHITE)"
	@${C_REMO} $(D_OBJS)
	@echo "$(P_DBLUE)Deleting $(NAME)...$(P_WHITE)"
	@${C_REMO} $(NAME)

re		: fclean all

# Test

val		:
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

# Phony

.PHONY: all clean fclean re val
