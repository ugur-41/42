# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: odemirel <odemirel@student.42kocaeli.>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 21:33:47 by odemirel          #+#    #+#              #
#    Updated: 2022/02/17 11:09:18 by odemirel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		$(shell find . -type f ! -name "ft_lst*.c" -name "*.c")
					# ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					# ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					# ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					# ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					# ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					# ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					# ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

BSRCS = 	$(shell find . -type f -name "ft_lst*.c")
					# ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
					# ft_lstclear.c ft_lstiter.c ft_lstmap.c

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I.
NAME = libft.a

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRCS)
		@ar rcs $(NAME) *.o
		@echo "\n\033[1;32m--> Compiling is complete"

clean:
		@$(RM) *.o
		@echo "\n\033[1;34m--> Clensed"

fclean: clean
		@$(RM) $(NAME)
		@echo "\n\033[1;34m--> FULL CLENSED"

re: fclean all

bonus:
		@$(CC) $(CFLAGS) -c $(SRCS) $(BSRCS)
		@ar rcs $(NAME) *.o
		@echo "\n\033[1;32m--> ALL COMPILED"

.PHONY: all clean fclean re bonus
