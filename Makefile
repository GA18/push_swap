NAME = push_swap

SRC = \
	main.c \
	utils.c \
	parser.c \
	ops_push.c \
	ops_reverse_rotate.c \
	ops_swap.c \
	ops_rotate.c \
	stack_utils.c \
	normalization.c \
	radix.c \
	small_sort.c

OBJ = $(SRC:%.c=%.o)

CC = cc

CFLAGS = -g3 -Wall -Wextra -Werror

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
