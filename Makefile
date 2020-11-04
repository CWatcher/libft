SRC		= ft_strlen.c
OBJ		= ${SRC:.c=.o}
NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

$(NAME):	$(OBJ)
	ar rs $@ $?

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all
