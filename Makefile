# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbenoist <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 14:54:00 by tbenoist          #+#    #+#              #
#    Updated: 2015/12/11 09:01:45 by tbenoist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libmnmocob.a

SRC = mnmocob_isalpha.c		mnmocob_memalloc.c	mnmocob_memdel.c		mnmocob_putendl.c	\
	  mnmocob_putstr_fd.c	mnmocob_strcpy.c		mnmocob_striteri.c	mnmocob_strmapi.c	\
	  mnmocob_strnew.c	  	mnmocob_strsub.c		mnmocob_isascii.c	mnmocob_memccpy.c	\
	  mnmocob_memmove.c		mnmocob_putendl_fd.c	mnmocob_strcat.c		mnmocob_strdel.c		\
	  mnmocob_strjoin.c		mnmocob_strncat.c	mnmocob_strnstr.c	mnmocob_strtrim.c	\
	  mnmocob_atoi.c			mnmocob_isdigit.c	mnmocob_memchr.c		mnmocob_memset.c		\
	  mnmocob_putnbr.c		mnmocob_strchr.c		mnmocob_strdup.c		mnmocob_strlcat.c	\
	  mnmocob_strncmp.c		mnmocob_strrchr.c	mnmocob_tolower.c	mnmocob_bzero.c		\
	  mnmocob_isprint.c		mnmocob_memcmp.c		mnmocob_putchar.c	mnmocob_putnbr_fd.c	\
	  mnmocob_strclr.c		mnmocob_strequ.c		mnmocob_strlen.c		mnmocob_strncpy.c	\
	  mnmocob_strsplit.c		mnmocob_toupper.c	mnmocob_isalnum.c	mnmocob_itoa.c		\
	  mnmocob_memcpy.c		mnmocob_putchar_fd.c	mnmocob_putstr.c		mnmocob_strcmp.c		\
	  mnmocob_striter.c		mnmocob_strmap.c		mnmocob_strnequ.c	mnmocob_strstr.c		\
	  mnmocob_lstnew.c 		mnmocob_lstdel.c		mnmocob_lstdelone.c	mnmocob_lstiter.c	\
	  mnmocob_lstmap.c 		mnmocob_lstadd.c		mnmocob_pow.c		mnmocob_lstget.c		\
	  mnmocob_lstadd_end.c	mnmocob_lstrch.c		mnmocob_strrev.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(SRC) 
	@gcc -Wall -Wextra -Werror -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
