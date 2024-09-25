# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 06:49:05 by tokuda            #+#    #+#              #
#    Updated: 2024/09/26 02:40:35 by tokuda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=ft_*.c
CFLAGS="-Wall -Werror -Wextra -c"
LIB_NAME="libft.a"

gcc $CFLAGS $SRC
ar rc $LIB_NAME ft_*.o
ranlib $LIB_NAME
rm *.o
