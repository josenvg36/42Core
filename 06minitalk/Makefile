NAME = minitalk
CC = gcc
CFLAGS = -Wall -Wextra -Werror
MY_SRCS = client.c server.c 
OBJ = $(MY_SRCS:.c=.o)
all: $(NAME)
${NAME}: $(OBJ)
		ar rcs $@ $^
%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@
server: server.o
		@make -C libft
		@make -C ft_printf
		$(CC) $(CFLAGS) $? -Llibft -lft -Lft_printf -lftft_printf -o server
client: client.o
		@make -C libft
		@make -C ft_printf
		$(CC) $(CFLAGS) $? -Llibft -lft -Lft_printf -lftft_printf -o client
libft:
		make -C libft
ft_printf:
			make -C ft_printf
clean:
		make clean -C libft
		make clean -C ft_printf
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all

.PHONY: libft ft_printf


