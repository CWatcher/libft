# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: CWatcher <cwatcher@student.21-school.r>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/15 16:37:00 by CWatcher          #+#    #+#              #
#    Updated: 2021/08/23 20:55:37 by CWatcher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= ft_atoi.c			\
		  ft_atou_skip.c	\
		  ft_bzero.c		\
		  ft_calloc.c		\
		  ft_isalnum.c		\
		  ft_isalpha.c		\
		  ft_isascii.c		\
		  ft_isdigit.c		\
		  ft_isprint.c		\
		  ft_isspace.c		\
		  ft_itoa.c			\
		  ft_free.c			\
		  ft_lstadd_back.c	\
		  ft_lstadd_front.c	\
		  ft_lstclear.c		\
		  ft_lstdelone.c	\
		  ft_lstiter.c		\
		  ft_lstlast.c		\
		  ft_lstmap.c		\
		  ft_lstnew.c		\
		  ft_lstsize.c		\
		  ft_memccpy.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_memcpy.c		\
		  ft_memmove.c		\
		  ft_memset.c		\
		  ft_putchar_fd.c	\
		  ft_putendl.c		\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\
		  ft_putstr.c		\
		  ft_putstr_fd.c	\
		  ft_reassign.c		\
		  ft_skipchr.c		\
		  ft_split.c		\
		  ft_strappend.c	\
		  ft_strchr.c		\
		  ft_strcmp.c		\
		  ft_strdup.c		\
		  ft_strjoin.c		\
		  ft_strlcat.c		\
		  ft_strlcpy.c		\
		  ft_strlen.c		\
		  ft_strmapi.c		\
		  ft_strncmp.c		\
		  ft_strndup.c		\
		  ft_strnstr.c		\
		  ft_strrchr.c		\
		  ft_strstr.c		\
		  ft_strtrim.c		\
		  ft_substr.c		\
		  ft_tolower.c		\
		  ft_toupper.c		\
		  get_next_line.c

OBJ		= $(SRC:.c=.o)
NAME	= libft.a
SO		= $(NAME:.a=.so)
CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs

$(NAME):	$(OBJ) Makefile
	$(AR) $@ $(OBJ)

%.o:	%.c Makefile
	$(CC) $(CFLAGS) -MMD -c $<

-include	$(SRC:.c=.d)

all:		$(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(SRC:.c=.d)

fclean:		clean
	$(RM) $(NAME) $(SO)

re:			fclean all

bonus:		$(NAME)

so:
	$(CC) $(CFLAGS) -fpic -c $(SRC)
	$(CC) -shared -o $(SO) $(OBJ)

.PHONY:		all clean fclean re bonus so
