# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/26 19:20:16 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/11/26 23:21:13 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Comamad Miscs

NAME	= push_swap
C_COMP	= cc
C_FLAG	= -Wall -Werror -Wextra
C_REMO	= rm -rf

# Sources & Objects

D_HDRS	= -I ./includes/
D_SRCS	= srcs/
D_OBJS	= objs/

N_SRCS	= main.c	\
	  check_input.c	\
	  s_sort.c	\
	  core_utils.c	\
	  check_utils.c	\
	  stack_utils.c	\
	  ft_utils.c	\
	  do_push.c	\
	  do_swap.c	\
	  do_rev_rot.c	\
	  do_rotate.c	\

F_SRCS	= $(addprefix $(D_SRCS), $(N_SRCS))

N_OBJS	= $(N_SRCS:.c=.o)
F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

# Mandatory Rules

all		: $(D_OBJS) $(NAME) 

$(D_OBJS)%.o	: $(D_SRCS)%.c
	$(C_COMP) $(C_FLAG) -c $< -o $@ $(D_HDRS)

$(D_OBJS)	:
	mkdir $(D_OBJS)

$(NAME)		: $(F_OBJS)
	$(C_COMP) $(C_FLAG) $(F_OBJS) -o $(NAME)

clean		:
	${C_REMO} $(D_OBJS)

fclean		: clean
	${C_REMO} $(NAME)

re		: fclean all

# Test Rules

test2		:	$(NAME)	
				$(eval ARG = $(shell shuf -i 0-100 -n 2))
				./push_swap $(ARG) | ../checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l

test3		:	$(NAME)	
				$(eval ARG = $(shell shuf -i 0-100 -n 3))
				./push_swap $(ARG) | ../checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l

test5		:	$(NAME)	
				$(eval ARG = $(shell shuf -i 0-5000 -n 5))
				./push_swap $(ARG) | ../checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l

test100		:	$(NAME)	
				$(eval ARG = $(shell shuf -i 0-5000 -n 100))
				./push_swap $(ARG) | ../checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l

test500		:	$(NAME)	
				$(eval ARG = $(shell shuf -i 0-5000 -n 500))
				./push_swap $(ARG) | ../checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l

test1000	:	$(NAME)	
				$(eval ARG = $(shell shuf -i 0-5000 -n 1000))
				./push_swap $(ARG) | ../checker_linux $(ARG)
				@echo -n "Instructions: "
				@./push_swap $(ARG) | wc -l

# Phony

.PHONY: all clean fclean re test2 test3 test5 test100 test500 test1000
