DEBUG =
INCDIR = includes
SRCDIR = srcs
OBJDIR = objs
CC = gcc
LD = $(CC)

CFLAGS = -W -Wall -Wextra -Werror -pedantic -pedantic-errors -Wstrict-aliasing -std=c11
LDFLAGS =
ifeq ($(DEBUG),yes)
	CC = clang
	CFLAGS += -ggdb3 -fstack-protector-all -Wshadow -Wunreachable-code \
			  -Wstack-protector -pedantic-errors -O0 -W -Wundef \
			  -Wfatal-errors -Wstrict-prototypes -Wmissing-prototypes \
			  -Wwrite-strings -Wunknown-pragmas -Wstrict-aliasing\
			  -Wold-style-definition -Wmissing-field-initializers -Wfloat-equal \
			  -Wpointer-arith -Wnested-externs -Wstrict-overflow=5 \
			  -Wmissing-field-initializers -Wswitch-default -Wswitch-enum \
			  -Wbad-function-cast -Wredundant-decls -fno-omit-frame-pointer \
			  -Winline -fstrict-aliasing
else
	CC = gcc
	CFLAGS += -O3 -fstrict-aliasing
endif

SRC = list.c my_string.c

OBJS = $(SRC:.c=.o)
	NAME = libmy_stdext.a
	OBJS_PREF = $(addprefix $(OBJDIR)/, $(OBJS))

all: objdir $(NAME)

objdir:
	@mkdir -p objs

$(NAME): $(OBJS_PREF)
	@echo "Linking $@."
	ar rcs $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@echo "Compiling $@ into $<"
	$(CC) $(CFLAGS) -I$(INCDIR) -o $@ -c $<

build-io:
	@echo "Building IO module."

clean:
	@echo "Removing $(OBJS_PREF)."
	/bin/rm -rf $(OBJS_PREF)

fclean: clean
	@echo "Removing $(NAME)."
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
