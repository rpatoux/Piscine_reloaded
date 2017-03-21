# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpatoux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 12:31:08 by rpatoux           #+#    #+#              #
#    Updated: 2016/11/03 14:20:07 by rpatoux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

HEADER = srcs/ft.h

SRC = srcs/main.c \
	  srcs/ft_putstr.c \
	  srcs/ft_error.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_putnbr.c \
	  srcs/ft_putstr_error.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f ft_display_file
