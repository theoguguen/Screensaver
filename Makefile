##
## EPITECH PROJECT, 2021
## Screensaver
## File description:
## Makefile
##

SRCDIR	=	src/

SRC	=	$(SRCDIR)my_framebuffer.c \
		$(SRCDIR)main.c \
		$(SRCDIR)draw_line.c \
		$(SRCDIR)draw_square.c \
		$(SRCDIR)draw_circle.c \
		$(SRCDIR)screensaver_1.c \
		$(SRCDIR)screensaver_2.c \
		$(SRCDIR)random.c \
		$(SRCDIR)rand_color.c \
		$(SRCDIR)destroy.c \
		$(SRCDIR)my_putchar.c \
		$(SRCDIR)my_putstr.c \
		$(SRCDIR)my_printf.c \
		$(SRCDIR)my_strcmp.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm -Wall -Wextra -W -I includes

NAME	=	my_screensaver

all:	$(NAME)

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

debug:	CFLAGS += -g
debug:	re

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re:	fclean all
