NAME = libft.a

#FLAGS = -Wall -Werror -Wextra

#IDIR = ./

#SDIR = ./

SRC = ft_memmove.c ft_strlcat.c ft_memrcpy.c ft_strlen.c \
ft_atoi.c ft_memset.c ft_strmap.c\
ft_bzero.c ft_nullterm.c ft_strmapi.c\
ft_ctoi.c ft_putchar.c ft_strncat.c\
ft_numodgt_base.c		ft_putchar_fd.c		ft_strncmp.c\
ft_isalnum.c		ft_putendl.c		ft_strncpy.c\
ft_isalpha.c		ft_putendl_fd.c		ft_strnequ.c\
ft_isascii.c		ft_putnbr.c		ft_strnew.c\
ft_isdigit.c		ft_putnbr_fd.c		ft_strnstr.c\
ft_islower.c		ft_putstr.c		ft_strrchr.c\
ft_isprint.c		ft_putstr_fd.c		ft_strsplit.c\
ft_isupper.c		ft_strcat.c\
ft_isws.c		ft_strchr.c		ft_strstr.c\
ft_itoa.c		ft_strclr.c		ft_strsub.c\
ft_itoa_base.c		ft_strcmp.c		ft_strtrim.c\
ft_itoc.c		ft_strcpy.c		ft_tolower.c\
ft_memalloc.c		ft_strdel.c		ft_toupper.c\
ft_memccpy.c		ft_strdup.c\
ft_memchr.c		ft_strequ.c		ft_strrev.c\
ft_memcmp.c		ft_striter.c		ft_swap.c\
ft_memcpy.c		ft_striteri.c\
ft_memdel.c		ft_strjoin.c\
ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c\

OBJS = $(SRC:.c=.o)

default: all

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)

clean:
	@rm -f *.o
	@rm -f *.gch

fclean: clean
	@rm -fr $(NAME)

re: fclean all
