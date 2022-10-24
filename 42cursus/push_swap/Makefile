CC		= gcc
NAME	= push_swap
FLAGS	= -Wall -Wextra -Werror
SRCS	= $(wildcard src/*.c Libft/*.c)

all : $(NAME)

$(NAME) :
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

re: fclean all

clean:
	@rm -rf $(NAME)
	@echo "silindi!"

fclean:	clean

norm:
	@norminette $(wildcard src/*.c)
	@norminette $(wildcard inc/*.h)
	@norminette $(wildcard Libft/*.c)

.PHONY: all re clean fclean norm