# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpavel <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/08/26 18:50:53 by mpavel            #+#    #+#              #
#    Updated: 2017/08/27 04:43:14 by mpavel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/*.c

DEP = ./includes/*.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I $(DEP) $(SRC)
	ar rc $(NAME) ./*.o
	ranlib $(NAME)

clean:
	/bin/rm -rf *.o

fclean: clean 
	/bin/rm -f $(NAME)

re: fclean all
