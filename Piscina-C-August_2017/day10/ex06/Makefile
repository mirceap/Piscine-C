# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpavel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/27 06:32:13 by mpavel            #+#    #+#              #
#    Updated: 2017/08/27 06:32:22 by mpavel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRC = ./srcs/*.c
OBJECT = ./*.o

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRC)
	gcc $(FLAGS) -o $(NAME) main.c $(SRC)
	make clean

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
