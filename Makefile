NAME = libftprintf.a

CC = cc

AR = ar rcs

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \

OBJS = $(SRC:.c=.o)

$(NAME): (OBJS)
		$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean: 
		@rm -f $(OBJS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

