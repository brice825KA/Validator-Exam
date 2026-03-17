#/
## EPITECH PROJECT, 2025
## my_octal_nbr
## File description:
## my_octal_nbr
#/

src	=	main.c	\
		validator.c	\

name  =		validator

all: $(name)

$(name):	$(src)
	clang $(src) -o $(name)

clean:
	rm -f $(name)

auteur:
	    echo $(user) > auteur

re:		clean $(name)
