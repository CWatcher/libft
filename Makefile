SRC		= ft_strlen.c
OBJ		= ${SRC:.c=.o}
NAM	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

$(NAM):	$(OBJ)
	ar r $@ $?

all:	$(NAM)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAM)

re:		fclean all
