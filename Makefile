##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

NAME	= my_runner

CC	= gcc

RM	= rm -f

SRC	= src/*.c

OBJ	= $(SRC:.c=.o)

FLAG	= -l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -o $(NAME) $(FLAG)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
