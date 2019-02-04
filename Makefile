.PHONY : clean, fclean, all

#MAKEFLAGS += --silent

NAME = libfortress.a

OBJDIR = obj

DIRS = $(addprefix $(OBJDIR)/,strings files exit conversion)

OBJ = $(addprefix $(OBJDIR)/,strings/basic_put.o strings/string_meta.o strings/string_compare.o strings/string_copy.o \
	  strings/specific_put.o strings/string_modif.o strings/buffer_basic.o strings/checked_buf.o  strings/string_generic.o \
	  strings/buf_quick.o strings/buf_specific.o strings/buf_numbers.o files/read_basic.o files/stdout.o exit/basic_exit.o conversion/int_str.o)

VPATH = src

CC = gcc

AR = ar

ARFLAGS = rc

CFLAGS = -Wextra -Werror -Wall -I headers/

$(OBJDIR)/%.o : %.c
	$(COMPILE.c) $(OUTPUT_OPTION) $<

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^
	ranlib $(NAME)

$(OBJ): | $(OBJDIR)

$(OBJDIR):
	mkdir $(OBJDIR) $(DIRS)

clean:
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all
