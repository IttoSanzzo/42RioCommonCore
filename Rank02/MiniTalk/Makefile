# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/11/28 12:53:33 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/11/28 16:59:54 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

# Binary Names:
NAME		= minitalk.a
CLIENT		= client
SERVER		= server
CLIENT_B	= client_bonus
SERVER_B	= server_bonus

#Compiling Variables:
CC		= cc
CFLAGS		= -Wall -Werror -Wextra
RM		= rm -rf

#functions & variables libraries:
LIBFT		= ./libft/libft.a
LIBFTDIR	= ./libft

#Sources
SERVER_SRC	:= server.c
CLIENT_SRC	:= client.c
SERVER_B_SRC	:= server_bonus.c
CLIENT_B_SRC	:= client_bonus.c

#Objects
CLI_OBJ		:= $(CLIENT_SRC:.c=.o)
SVR_OBJ		:= $(SERVER_SRC:.c=.o)
CLI_B_OBJ	:= $(CLIENT_B_SRC:.c=.o)
SVR_B_OBJ	:= $(SERVER_B_SRC:.c=.o)

all		: $(CLIENT) $(SERVER)

$(SERVER)	: $(LIBFT) $(SVR_OBJ)
	$(CC) $(CFLAGS) $(SVR_OBJ) $(LIBFT) -o $@

$(CLIENT)	: $(LIBFT) $(CLI_OBJ)
	$(CC) $(CFLAGS) $(CLI_OBJ) $(LIBFT) -o $@

$(LIBFT)	:
	$(MAKE) --no-print-directory -C $(LIBFTDIR)

clean		:
	$(MAKE) clean -C $(LIBFTDIR)
	$(RM) $(CLI_OBJ)
	$(RM) $(SVR_OBJ)
	$(RM) $(CLI_B_OBJ)
	$(RM) $(SVR_B_OBJ)

fclean		: clean
	$(MAKE) fclean -C $(LIBFTDIR)
	$(RM) $(CLIENT)
	$(RM) $(SERVER)
	$(RM) $(CLIENT_B)
	$(RM) $(SERVER_B)

re		: fclean all

bonus		: $(CLIENT_B) $(SERVER_B)

$(SERVER_B)	: $(LIBFT) $(SVR_B_OBJ)
	$(CC) $(CFLAGS) $(SVR_B_OBJ) $(LIBFT) -o $@

$(CLIENT_B)	: $(LIBFT) $(CLI_B_OBJ)
	$(CC) $(CFLAGS) $(CLI_B_OBJ) $(LIBFT) -o $@

.PHONY: all clean fclean re bonus
