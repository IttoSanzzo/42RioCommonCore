# **************************************************************************** #
#									       #
#							  :::	   ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#						      +:+ +:+	      +:+      #
#    By: marcosv2 <marcosv2@student.42.rio>	    +#+  +:+	   +#+	       #
#						  +#+#+#+#+#+	+#+	       #
#    Created: 2023/10/17 14:24:06 by marcosv2	       #+#    #+#	       #
#    Updated: 2023/10/17 14:24:53 by marcosv2         ###   ########.fr        #
#									       #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
REMOVE = rm -rf

SOURCE = ft_isalnum.c \
 ft_isalpha.c \
 ft_isascii.c \
 ft_isdigit.c \
 ft_isprint.c \
 ft_tolower.c \
 ft_toupper.c \
 ft_strlen.c \
 ft_strlcpy.c \
 ft_strlcat.c \
 ft_strncmp.c \
 ft_strchr.c \
 ft_strrchr.c \
 ft_strnstr.c \
 ft_atoi.c \
 ft_memcmp.c \
 ft_bzero.c \
 ft_memcpy.c \
 ft_memset.c \
 ft_memmove.c \
 ft_memchr.c \
 ft_calloc.c \
 ft_strdup.c \
 ft_putchar_fd.c \
 ft_putstr_fd.c \
 ft_putendl_fd.c \
 ft_putnbr_fd.c \
 ft_substr.c \
 ft_strjoin.c \
 ft_strtrim.c \
 ft_itoa.c \
 ft_split.c \
 ft_strmapi.c \
 ft_striteri.c \

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@ $^

clean:
	$(REMOVE) $(OBJECTS)

fclean: clean
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: all clean fclean re
