# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouassit <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 11:21:21 by mouassit          #+#    #+#              #
#    Updated: 2021/05/25 11:21:24 by mouassit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = push_swap.c \
	  functions_help.c \
	  instructions.c \
	  push.c \
	  cases.c

OBJECT = push_swap.o \
		functions_help.o \
		instructions.o \
		push.o \
		cases.o

all : $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -fsanitize=address -I /Users/mouassit/Desktop/push_swap $(SRC) -L /Users/mouassit/Desktop/push_swap -o $(NAME)



clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all