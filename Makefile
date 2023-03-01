# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jofoto <jofoto@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 13:38:36 by jofoto            #+#    #+#              #
#    Updated: 2023/02/26 14:02:49 by jofoto           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
SRC = main.c instructions/inst_helper.c instructions/inst_rev_rotate.c \
		instructions/inst_rotate.c instructions/inst_swap_push.c \
		algorithm/algorithm.c init.c
		
OFILES = main.o inst_helper.o inst_rev_rotate.o \
		inst_rotate.o inst_swap_push.o \
		algorithm.o init.o

NAME = push_swap

all: $(NAME)

$(NAME): #$(addprefix  obj_files/, $(OFILES))
	cd libft && $(MAKE)
	cp libft/libft.a obj_files/
	gcc -c $(SRC) $(FLAGS)
	mv $(OFILES) obj_files
	gcc -o $(NAME) $(FLAGS) $(addprefix  obj_files/, $(OFILES)) obj_files/libft.a

obj_files/%.o: %.c
	@cc $(FLAGS) -c -o $@ $^

clean:
	rm -f $(addprefix  obj_files/, $(OFILES)) obj_files/libft.a
	cd libft && $(MAKE) fclean
	
fclean: clean
	rm -f $(NAME)
	rm -rf push_swap.dSYM

re: fclean all

debug: fclean
	cd libft && $(MAKE)
	cp libft/libft.a obj_files/
	gcc -g -o $(NAME) $(SRC) $(FLAGS) obj_files/libft.a
	