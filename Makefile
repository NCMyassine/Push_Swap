NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c node.c parse.c split.c operations_functions.c\
	operations_part_one.c operations_part_two.c 

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re