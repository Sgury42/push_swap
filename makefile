

NAME = checker

SRCS = checker.c \
       ft_get_list.c \
       ft_error.c

OBJS = $(SRCS:.c=.o)

INCLUDES = checker.h

LIB_C_PATH = ../libft/

LIBFT = ../libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBFT) -I $(INCLUDES)

%.o: %.c $(LIBFT)
	$(CC) -o $@ -c $< $(CFLAGS) -I $(INCLUDES)

$(LIBFT):
	make -C $(LIB_C_PATH)

clean:
	rm -rf $(OBJS)
	make clean -C $(LIB_C_PATH)

re: fclean all

.PHONY: re fclean all clean
