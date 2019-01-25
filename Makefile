.PHONY : clean, fclean, all

NAME = libfortress.a

objdir = obj

obj = $(addprefix $(objdir)/, )

VPATH = src

CC = gcc

AR = ar

ARFLAGS = rc

CFLAGS = -Wextra -Werror -Wall -I headers/

$(objdir)/%.o : %.c
	$(COMPILE.c) $(OUTPUT_OPTION) $<

all: $(NAME)

$(NAME): $(obj)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $(NAME)

$(obj): | $(objdir)

$(objdir):
	mkdir $(objdir)

clean:
	rm $(obj)

fclean: clean
	rm $(NAME)

re: fclean all
