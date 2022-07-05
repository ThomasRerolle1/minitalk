SRCS = server.c client.c

OBJECTS = $(SRCS:.c=.o)

SRCS_BONUS = bonus/server.c bonus/client.c

OBJECTS_BONUS = $(SRCS_BONUS:.c=.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

GREEN = \033[0;32m

all: server client

server: server.o libft
	@make -C libft/
	@cp libft/libft.a .
	@$(CC) server.o -L. -lft -o server
	@echo "$(GREEN) Server succesfully compiled$(RESET)"

client: client.o libft
	@make -C libft/
	@cp libft/libft.a .
	@$(CC) client.o -L. -lft -o client
	@echo "$(GREEN) Client succesfully compiled$(RESET)"
 

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

bonus: server_bonus client_bonus

server_bonus: bonus/server_bonus.o libft
	@make -C libft/
	@cp libft/libft.a .
	@$(CC) bonus/server_bonus.o -L. -lft -o server_bonus
	@echo "$(GREEN) Server_bonus succesfully compiled$(RESET)"

client_bonus: bonus/client_bonus.o libft
	@make -C libft/
	@cp libft/libft.a .
	@$(CC) bonus/client_bonus.o -L. -lft -o client_bonus
	@echo "$(GREEN) Client_bonus succesfully compiled$(RESET)"

clean:
	@rm -rf $(OBJECTS)
	@rm -rf $(OBJECTS_BONUS)
	@make -C libft clean

fclean: clean
	@rm -rf server client server_bonus client_bonus libft/libft.a

re: fclean all

.PHONY: all server bonus client clean fclean re
