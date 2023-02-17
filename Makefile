# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 12:24:23 by rmorais           #+#    #+#              #
#    Updated: 2023/02/17 20:12:59 by rmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

SRC = args errors_utils ft_atol listutils main push rotate swap reverserotate sort_3_args \

all: $(NAME)

$(NAME): $(SRC:=.o)
				$(CC) $(CFLAGS) $(SRC:=.o) -o $(NAME)
clean:
				$(RM) $(SRC:=.o)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
			