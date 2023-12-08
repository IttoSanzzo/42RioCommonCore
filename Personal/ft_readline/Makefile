# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/26 19:20:16 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/12/08 09:42:45 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Comamad Miscs

NAME	= ft_readline.a
C_COMP	= cc
C_ARRC	= ar -rc
C_FLAG	= -Wall -Werror -Wextra
C_REMO	= rm -rf

# Dirs

D_HDRS	= -I ./includes/
D_SRCS	= src/
D_OBJS	= objs/

# Sources & Objects

N_MAIN	= $(shell ls $(D_SRCS)main/ | grep -E ".+\.c")
	
F_SRCS	= $(addprefix $(D_SRCS)main/, $(N_MAIN))	\

N_OBJS	= $(N_MAIN:.c=.o)	\

F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

# Colors
P_WHITE	= \033[0m
P_LBLUE	= \033[0;32m
P_DBLUE	= \033[0;34m
P_PRPLE	= \033[0;35m
P_NCYAN	= \033[0;36m
P_GREEN	= \033[38;5;40m

# Mandatory Rules

all		: $(NAME)

$(D_OBJS)%.o	: $(D_SRCS)/*/%.c
	@printf "\t$(P_PRPLE)Generating $(NAME)..: %-33.33s\r $(P_WHITE)" $@
	@$(C_COMP) $(C_FLAG) $(D_HDRS) -c $< -o $@

$(D_OBJS)	:
	@echo "$(P_LBLUE)Starting $(NAME) compilation...$(P_WHITE)"
	@echo "\n\t$(P_DBLUE)Creating $(NAME) objects directory...$(P_WHITE)"
	@mkdir $(D_OBJS)

$(NAME)		:  $(D_OBJS) $(F_OBJS)
	@echo "\n\t$(P_NCYAN)Finishing $(NAME)..: $(P_LBLUE)$(NAME)$(P_WHITE)\n"
	@$(C_ARRC) $(NAME) $(F_OBJS)
	@echo "$(P_GREEN)Done!$(P_WHITE)"

clean		:
	@echo "$(P_DBLUE)Cleaning $(NAME) objects...$(P_WHITE)"
	@$(C_REMO) $(D_OBJS)

fclean		: clean
	@echo "$(P_DBLUE)Deleting $(NAME)...$(P_WHITE)"
	@${C_REMO} $(NAME)

re		: fclean all

# Personal

ct		:
	@$(C_COMP) $(FLAGS) main.c $(NAME)

rt		:
	@$(C_REMO) ./a.out

# Phony

.PHONY: all clean fclean re s_mess ct rt
