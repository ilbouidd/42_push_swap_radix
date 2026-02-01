SRCS =  parsing.c   		\
        swap.c      		\
        stack.c				\
		push_swap.c 		\
		rotate.c    		\
		reverse_rotate.c 	\
		push.c      		\
		sort_three.c 		\
		put_index.c 		\
		sort_all.c   		\
		sort_two.c			\
		utils.c				\
		sort_five.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = push_swap

LIB = ./libft

LIBA = $(LIB)/libft.a

all: $(NAME)

$(NAME): $(OBJS) $(LIBA)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBA) -o $(NAME)
	@echo "TOUT EST GOOD 🤓👍🔥"

$(LIBA):
	@$(MAKE) -C $(LIB)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(MAKE) -C $(LIB) clean
	@rm -f $(OBJS)
	@echo "TOUT LES FICHIERS .o 💀"

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(LIB) fclean
	@echo "push_swap 💀"

re: fclean all

.PHONY: all clean fclean re
