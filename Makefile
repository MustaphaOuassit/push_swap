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

all : $(NAME)

$(NAME): $(SRC) $(LIB)
	@gcc -Wall -Wextra -Werror -I /Users/mouassit/Desktop/push_swap $(SRC) -L /Users/mouassit/Desktop/push_swap -o $(NAME)


fclean:
	@rm -rf $(NAME)

re: fclean all