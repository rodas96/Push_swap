# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 12:24:23 by rmorais           #+#    #+#              #
#    Updated: 2023/02/16 14:50:35 by rmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC_NAME = args.c errors_utils.c ft_atol.c listutils.c  \


SRC = $(addprefix $(SRC_NAME)) main.c

$(NAME): $(SRC)
				$(CC) $(CFLAGS) $(SRC) -o $(NAME)
clean:
				$(RM) $(SRC:=.o)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
			