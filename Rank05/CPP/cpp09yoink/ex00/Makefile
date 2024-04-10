NAME = btc

SRCS = *.cpp

INCLUDE = -I includes

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

CC = g++

RM = rm -rf

all: $(NAME)
$(NAME): $(SRCS)
		$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

rainbow :
	@echo "$(red)R$(grn)A$(yel)I$(blu)N$(pnk)B$(cya)O$(wht)W$(rst)"
	@echo "$(grn)$(ok) $(rst)"
	@echo "$(yel)$(ck) $(rst)"
	@echo "$(red)$(ko) $(rst)"
.PHONY : rainbow

#.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*. VISUALS .*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.
ok:=✓
ko:=✗
ck:=・
s:=\033[0
red:=$s31m
grn:=$s32m
yel:=$s33m
blu:=$s34m
pnk:=$s35m
cya:=$s36m
wht:=$s37m
rst:=$s00m
ora:=$s38;2;255;153;0m
#.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.*.

re: fclean all

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)
