SRC		= ft_memccpy.c ft_strlen.c ft_strlcpy.c
OBJ		= ${SRC:.c=.o}
NAME	= libft.a
CC		= clang
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
