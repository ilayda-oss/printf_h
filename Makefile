 NAME = libftprintf.a

SRCS = ft_printf_u.c ft_putchar.c ft_printf.c

OBJS = $(SRCS:.c=.o)

CC = gcc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

all: $(NAME)

src/%.o: src/%.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re