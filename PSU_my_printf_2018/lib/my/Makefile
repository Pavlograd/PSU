##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## match_nmatch
##

SRC	=	my_putchar.c			\
		my_put_nbr.c			\
		my_putstr.c			\
		my_strlen.c			\
		my_getnbr.c			\
		sum_stdarg.c			\
		disp_stdarg.c			\
		my_printf.c			\
		my_put_bin.c			\
		my_put_unsigned.c		\
		my_intlen.c			\
		my_revstr.c			\
		my_put_hex.c			\
		my_put_oct.c			\
		my_put_point.c			\
		my_put_non_printable.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp libmy.a ../../

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
