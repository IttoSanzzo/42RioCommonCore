# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/26 19:20:16 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/12/08 09:32:30 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Comamad Miscs

NAME	= libft.a
C_COMP	= cc
C_FLAG	= -Wall -Werror -Wextra
C_ARRC	= ar -rc
C_REMO	= rm -rf

# Sources & Objects

D_HDRS	= -I ./includes/
D_SRCS	= src/
D_OBJS	= objs/

N_SRCS	= ft_isalpha.c		\
	ft_isdigit.c		\
	ft_isalnum.c		\
	ft_isascii.c		\
	ft_isprint.c		\
	ft_strlen.c		\
	ft_memset.c		\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c		\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_toupper.c		\
	ft_tolower.c		\
	ft_strchr.c		\
	ft_strrchr.c		\
	ft_strncmp.c		\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strnstr.c		\
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
	ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c	\
	ft_lstlast_bonus.c	\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c	\
	ft_lstiter_bonus.c	\
	ft_lstmap_bonus.c	\
	ft_printf.c		\
	ft_ftypes.c		\
	ft_printpercent.c	\
	ft_printchar.c		\
	ft_printstr.c		\
	ft_printnbr.c		\
	ft_printunsigned.c	\
	ft_printhex.c		\
	ft_printpointer.c	\
	ft_printf_utils.c	\
	ft_putstr.c		\
	ft_readline.c		\

F_SRCS	= $(addprefix $(D_SRCS), $(N_SRCS))

N_OBJS	= $(N_SRCS:.c=.o)
F_OBJS	= $(addprefix $(D_OBJS), $(N_OBJS))

# Colors
P_WHITE	= \033[0m
P_LBLUE	= \033[0;32m
P_BROWN	= \033[0;33m
P_DBLUE	= \033[0;34m
P_NCYAN	= \033[0;36m
P_GREEN	= \033[38;5;40m

# Mandatory Rules

all		: $(NAME)

$(D_OBJS)%.o	: $(D_SRCS)%.c
	@printf "\t$(P_BROWN)Generating $(NAME)..: %-33.33s\r $(P_WHITE)" $@
	@$(C_COMP) $(C_FLAG) -c $< -o $@ $(D_HDRS)

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

# Phony

.PHONY: all clean fclean re s_mess
