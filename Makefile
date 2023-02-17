SRC = main.c instructions/inst_helper.c instructions/inst_rev_rotate.c \
		instructions/inst_rotate.c instructions/inst_swap_push.c \
		algorithm/algorithm.c

NAME = push_swap

all: $(NAME)

$(NAME): 
	gcc -o $(NAME) $(SRC)

clean:

fclean: clean
	rm $(NAME)

re: fclean all