NAME = ft_printf.a

SRCS= ft_printf_u.c ft_putchar.c ft_printf.c
OBJS= $(SRCS:.c=.o)

CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror

$(NAME):
    $(CC) $(FLAGS) -c $(SRCS)
    ar rc $(NAME) $(OBJS)

all: 
    $(NAME)
clean:
    $(RM) $(OBJS) 
fclean: clean
    $(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re 
# echo "# printf_h" >> README.md
# git init
# git add README.md
# git commit -m "first commit"
# git branch -M main
# git remote add origin https://github.com/ilayda-oss/printf_h.git
# git push -u origin main