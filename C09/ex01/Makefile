# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 06:48:51 by tokuda            #+#    #+#              #
#    Updated: 2024/09/26 05:15:33 by tokuda           ###   ########.fr        #
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
	ar rc $@ $^
	ranlib $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB_NAME)

re: fclean all
