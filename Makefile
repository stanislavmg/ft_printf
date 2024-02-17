NAME	=	libftprintf.a

INCLUDE =	ft_printf.h

CFLAGS	=	-Wall -Wextra -Werror

SRC		=	ft_printf.c	internal_ft_printf.c ft_out.c

OBJ		=	$(SRC:%.c=%.o)

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME) :	$(OBJ) $(INCLUDE) Makefile
	ar rcs $(NAME) $?

%.o		:	%.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -f $(OBJ)

fclean	:	clean
	rm -f $(NAME)

re		:	fclean all
