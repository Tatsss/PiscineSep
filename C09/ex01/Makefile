# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 06:48:51 by tokuda            #+#    #+#              #
#    Updated: 2024/09/24 09:08:09 by tokuda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INCLUDES = includes
CFLAGS = -Wall -Werror -Wextra -I $(INCLUDES)

.PHONY: all clean fclean re

all: $(LIB_NAME)

$(LIB_NAME):
	@echo "Creating library $@"
	ar rc $@ $^
	@echo "Library $@ created."

%.o: %.c
	@echo "Compiling $<"
	gcc $(CFLAGS) -c $< -o $@

clean:
	@echo "Cleaning up object files..."
	rm -f $(OBJS)

fclean: clean
	@echo "Removing library $@..."
	rm -f $(LIB_NAME)

re:
	fclean all
