#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aviala <aviala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 18:47:54 by aviala            #+#    #+#              #
#    Updated: 2013/11/22 14:25:26 by aviala           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LD = gcc
INCDIR = ./includes
SRCDIR = ./srcs
OBJDIR = ./objs
CC = gcc
CFLAGS = -fstack-protector-all -ansi -Wshadow -Wall -Werror -Wextra -O3 \
		 -Wunreachable-code -Wstack-protector -pedantic-errors \
		 -Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes \
		 -Wwrite-strings -Wunreachable-code -pedantic
LDFLAGS =
SRC = 	ft_strlen.c		ft_isalnum.c	ft_isalpha.c	ft_isascii.c \
		ft_isdigit.c 	ft_isprint.c 	ft_strcpy.c 	ft_strncpy.c \
		ft_strdup.c 	ft_toupper.c 	ft_tolower.c	ft_memcpy.c \
		ft_memccpy.c	ft_bzero.c      ft_memchr.c		ft_memmove.c \
		ft_memcmp.c		ft_strcmp.c		ft_atoi.c		ft_memset.c \
		ft_strchr.c
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
