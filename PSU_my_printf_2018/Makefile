##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile
##

SRC	=	tests/unit_tests.c	\

NAME	=	a.out

all:	$(NAME)

$(NAME):
	cd lib/my && make && make clean
	gcc -o $(NAME) $(SRC) -I./include -L./lib/my -lmy -lcriterion --coverage

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
