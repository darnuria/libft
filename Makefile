#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aviala <aviala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 18:47:54 by aviala            #+#    #+#              #
#    Updated: 2013/11/27 22:46:38 by aviala           ###   ########.fr        #
#                                                                              #
#******************************************************************************#


INCDIR = .
SRCDIR = .
OBJDIR = .
CC = gcc
LD = $(CC)
GCCVERSION = $(shell $(CC) --version | grep ^$(CC) | sed 's/^.* //g')
CFLAGS =  -g3 -fstack-protector-all -ansi -Wshadow -Wall -Werror -Wextra -O3 \
		 -Wunreachable-code -Wstack-protector -pedantic-errors \
		 -Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes \
		 -Wwrite-strings -Wunreachable-code -pedantic \
		 -Wunknown-pragmas -Wdeclaration-after-statement \
		 -Wold-style-definition -Wmissing-field-initializers \
		 -Winline -Wunsafe-loop-optimizations
ifeq "$(GCCVERSION)" "4.8.1"
    CFLAGS += -Wno-unused-result
endif

LDFLAGS =
SRC = 	ft_strlen.c		ft_isalnum.c		ft_isalpha.c	ft_isascii.c \
		ft_isdigit.c 	ft_isprint.c		ft_strcpy.c 	ft_strncpy.c \
		ft_strdup.c 	ft_toupper.c		ft_tolower.c	ft_memcpy.c \
		ft_memccpy.c	ft_bzero.c			ft_memchr.c		ft_memmove.c \
		ft_memcmp.c		ft_strcmp.c			ft_atoi.c		ft_memset.c \
		ft_strchr.c		ft_strrchr.c		ft_strnstr.c	ft_strstr.c \
		ft_strcat.c		ft_strncat.c		ft_strlcat.c	ft_strnew.c \
		ft_strdel.c		ft_strclr.c			ft_strequ.c		ft_putendl.c \
		ft_putchar.c	ft_putchar_fd.c		ft_putnbr.c		ft_putendl_fd.c \
		ft_putnbr_fd.c	ft_putstr.c			ft_putstr_fd.c	ft_strnequ.c \
		ft_strncmp.c	ft_striter.c		ft_striteri.c	ft_strmap.c \
		ft_strmapi.c	ft_strsub.c			ft_strjoin.c	ft_memalloc.c \
		ft_memdel.c
#ft_strsplit.c
#ft_iota.c
OBJS = $(SRC:.c=.o)
NAME = libft.a
OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS_PREF)

$(OBJS):
	$(CC) $(CFLAGS) -I$(INCDIR) -o $(OBJDIR)/$*.o -c $(SRCDIR)/$*.c

clean:
	@/bin/rm -rf $(OBJS_PREF)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
