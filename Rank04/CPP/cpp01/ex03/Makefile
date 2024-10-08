# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/02 15:01:33 by marcosv2          #+#    #+#              #
#    Updated: 2024/04/04 22:43:12 by marcosv2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Comamad Miscs

NAME	= LittleViolence
C_COMP	= c++
C_FLAG	= -Wall -Werror -Wextra -std=c++98
C_MDIR	= mkdir -p
C_REMO	= rm -rf
C_PUTS	= printf

# Dirs

D_HDRS	= -I ./
D_SRCS	= ./
D_OBJS	= objs/

# Sources & Objects

N_MAIN	=	main.cpp	\
			Weapon.cpp	\
			HumanA.cpp	\
			HumanB.cpp
F_SRCS	= $(addprefix $(D_SRCS)/, $(N_MAIN))
N_OBJS	= $(N_MAIN:.cpp=.opp)

F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

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

$(NAME)		: $(D_OBJS) $(F_OBJS)
	@$(C_PUTS) "\n\t$(P_NCYAN)Finishing binary..: $(P_LBLUE)$(NAME)$(P_WHITE)\n"
	@$(C_COMP) $(C_FLAG) $(D_HDRS) -o $@ $(F_OBJS)
	@$(C_PUTS) "$(P_GREEN)Done!$(P_WHITE)\n"

$(D_OBJS)%.opp	: $(D_SRCS)/%.cpp
	@$(C_PUTS) "\t$(P_PRPLE)Generating $(NAME)..: %-33.33s\r $(P_WHITE)" $@
	@$(C_COMP) $(C_FLAG) $(D_HDRS) -c $< -o $@

$(D_OBJS)	:
	@clear
	@$(C_PUTS) "$(P_LGREN)Starting $(NAME) compilation...$(P_WHITE)"
	@$(C_PUTS) "\n\t$(P_MAGEN)Creating $(NAME) objects directory...$(P_WHITE)\n"
	@$(C_MDIR) $(D_OBJS)

clean		:
	@$(C_PUTS) "$(P_NWINE)Cleaning $(NAME) objects...$(P_WHITE)\n"
	@${C_REMO} $(D_OBJS)

fclean		:
	@$(C_PUTS) "$(P_NWINE)Cleaning $(NAME) objects...$(P_WHITE)\n"
	@${C_REMO} $(D_OBJS)
	@$(C_PUTS) "$(P_NWINE)Deleting $(NAME)...$(P_WHITE)\n"
	@${C_REMO} $(NAME)

re		: fclean all

# Test

val		:
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

# Phony

.PHONY: all clean fclean re val
