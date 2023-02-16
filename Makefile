# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmorais <rmorais@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/15 12:24:23 by rmorais           #+#    #+#              #
#    Updated: 2023/02/16 13:17:04 by rmorais          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = args errors_utils ft_atol listutils main \

OBJS =	$(SRCS:=.o)

CC = gcc
RM = rm -f

all: $(NAME)

SRC = $(addprefix $(SRC_NAME))

$(NAME): $(SRCS:=.o)
				@ar rcs $(NAME) $(SRCS:=.o)
bonus:	$(SRCS:=.o)	
				@ar rcs $(NAME) $(SRCS:=.o)
clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
			