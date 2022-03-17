NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
SRCS = $(shell find . -type f -name "*.c")
RM = rm -f

all:  $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(SRCS)
	@ar -rcs $(NAME) *.o
	@echo "finished\n"

clean:
	@$(RM) *.o
	@echo "finished\n"
fclean: clean
	@$(RM) $(NAME)
re: fclean all

.PHONY: all re clean fclean
