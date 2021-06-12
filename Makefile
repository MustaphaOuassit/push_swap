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

LIB = push_swap.h

SRC = push_swap.c \
	  functions_help.c \
	  instructions.c \
	  push.c \
	  cases.c \
	  contunue_push.c \
	  contunue_instructions.c \
	  contunue_cases.c \
	  contunue_chunck.c

OBJECT = push_swap.o \
		functions_help.o \
		instructions.o \
		push.o \
		cases.o \
		contunue_push.o \
		contunue_instructions.o \
		contunue_cases.o \
		contunue_chunck.o

all : $(NAME)

$(NAME): $(SRC) $(LIB)
	@gcc -Wall -Wextra -Werror -I /Users/mouassit/Desktop/push_swap $(SRC) -L /Users/mouassit/Desktop/push_swap -o $(NAME)



clean:
	@rm -rf $(OBJECT)

fclean: clean
	@rm -rf $(NAME)

re: fclean all