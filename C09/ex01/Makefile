# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 06:48:51 by tokuda            #+#    #+#              #
#    Updated: 2024/09/26 07:11:06 by tokuda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB_NAME = libft.a
SRCDIR = srcs
SRCS = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
INCDIR = includes
CFLAGS = -Wall -Wextra -Werror -I $(INCDIR)

all: $(LIB_NAME)

$(LIB_NAME):$(OBJS)
	ar rcs $(LIB_NAME) $(OBJS)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB_NAME)

re : fclean all

.PHONY: all clean fclean re
