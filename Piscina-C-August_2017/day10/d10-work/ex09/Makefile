NAME = ft_advanced_do-op

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