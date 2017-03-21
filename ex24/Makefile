# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpatoux <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 09:42:12 by rpatoux           #+#    #+#              #
#    Updated: 2016/11/03 11:31:03 by rpatoux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c \

OBJ = ft_putchar.o \
	  ft_putstr.o \
	  ft_strcmp.o \
	  ft_strlen.o \
	  ft_swap.o \
 
CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRC)
	echo "tamer"
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean : 
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean 
	make
