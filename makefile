NAME = push_swap

SRC = main.c	utils.c	parser.c operations.c

OBJ = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -g -Wall -Wextra -Werror

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all