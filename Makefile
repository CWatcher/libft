SRC		= ft_memccpy.c ft_strlen.c ft_strlcpy.c ft_strdup.c ft_atoi.c #ft_split.c
OBJ		= $(SRC:.c=.o)
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

so:
	$(CC) $(CFLAGS) -fpic -c $(SRC)
	$(CC) -shared -o libft.so $(OBJ)
