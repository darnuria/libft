LD = gcc
INCDIR = ./includes
SRCDIR = ./srcs
OBJDIR = ./objs
CC = gcc
CFLAGS = -fstack-protector -ansi -pedantic -pedantic-errors -O3 \
         -Wunreachable-code  -Wstack-protector -Wshadow -Wall -Werror -Wextra \
         -Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes \
         -Wwrite-strings -Wunreachable-code
LDFLAGS =
SRC = ft_strlen.c
OBJS = $(SRC:.c=.o)
NAME = libft.a
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS_PREF)

$(OBJS):
	@$(CC) $(CFLAGS) -I$(INCDIR) -o $(OBJDIR)/$*.o -c $(SRCDIR)/$*.c

clean:
	@/bin/rm -rf $(OBJS_PREF)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
