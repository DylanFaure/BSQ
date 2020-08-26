##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## compiles libmy
##

SRC	=	main.c	\
		lib/my/my_put_tab.c	\
		lib/my/final_tab_char.c	\
		lib/my/final_tab_int.c	\
		lib/my/calc_size.c	\
		lib/my/my_compute_power_it.c	\
		lib/my/my_intlen.c	\
		lib/my/my_strlen.c	\
		lib/my/my_putchar.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_putstr.c	\
		lib/my/my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f *~
	rm -f *#
	rm -f lib/my/*~
	rm -f lib/my/*#
	rm -f lib/my/*.o

re:	fclean all
