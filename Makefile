SRC		= ft_memset.c ft_bzero.c ft_calloc.c \
		  ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c \
		  ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
		  ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c\
		  ft_atoi.c \
		  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_toupper.c ft_tolower.c\
		  ft_strtrim.c ft_substr.c ft_strjoin.c ft_split.c
OBJ		= $(SRC:.c=.o)
NAME	= libft.a
SO		= libft.so
CC		= clang
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

$(NAME):	$(OBJ)
	ar rs $@ $?

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME) $(SO)

re:			fclean all

so:
	$(CC) $(CFLAGS) -fpic -c $(SRC)
	$(CC) -shared -o $(SO) $(OBJ)
