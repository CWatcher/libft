# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/15 16:37:00 by CWatcher          #+#    #+#              #
#    Updated: 2020/11/15 16:59:42 by CWatcher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_memset.c ft_bzero.c ft_calloc.c \
		  ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c \
		  ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strdup.c \
		  ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c\
		  ft_atoi.c \
		  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_toupper.c ft_tolower.c\
		  ft_strtrim.c ft_substr.c ft_strjoin.c \
		  ft_split.c ft_itoa.c ft_strmapi.c \
		  ft_putchar_fd.c ft_lstmap.c
SRC_B	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		  ft_lstdelone.c ft_lstclear.c ft_lstiter.c
OBJ		= $(SRC:.c=.o)
OBJ_B	= $(SRC_B:.c=.o)
NAME	= libft.a
SO		= libft.so
CC		= clang
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rs

$(NAME):	$(OBJ)
	$(AR) $@ $?

all:		$(NAME)

c.o.:		libft.h

clean:
	$(RM) $(OBJ) $(OBJ_B)

fclean:		clean
	$(RM) $(NAME) $(SO)

re:			fclean all

so:
	$(CC) $(CFLAGS) -fpic -c $(SRC)
	$(CC) -shared -o $(SO) $(OBJ)

bonus:	$(OBJ_B) all
	$(AR) $(NAME) $(OBJ_B)
