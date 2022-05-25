NAME = libft.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRCS = $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")
BSRCS = $(shell find . -type f -name "ft_lst*.c")
RM = rm -f

all:  $(NAME)

$(NAME):
	@$(CC) $(FLAGS) -c $(SRCS)
	@ar -rcs $(NAME) *.o
	@echo "finished\n"

clean:
	@$(RM) *.o
	@echo "finished\n"
fclean: clean
	@$(RM) $(NAME)
re: fclean all
bonus:
	@$(CC) $(FLAGS) -c $(SRCS) $(BSRCS)
	@ar -rcs $(NAME) *.o
	@echo "finished\n"

.PHONY: all re clean fclean bonus
