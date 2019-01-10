NAME = ft_cat

FLAGS = -Wall -Wextra -Werror -pedantic

IDIR = inc

SDIR = src

SRC = ./get_next_line.c ./main.c

LIB = ./libft

default: all

all: $(SRC)
	@gcc $(SRC) -I $(LIB) -L $(LIB) -lft $(FLAGS) -o $(NAME)

clean:
	@rm -rf $(NAME).dSYM
	@rm $(NAME)
