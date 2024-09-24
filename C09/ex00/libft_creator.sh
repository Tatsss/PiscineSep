# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/24 06:49:05 by tokuda            #+#    #+#              #
#    Updated: 2024/09/24 06:49:30 by tokuda           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src=ft_*.c
options="-Wall -Werror -Wextra -c"
lib_name="libft.a"

gcc $options $src
ar rc $lib_name ft_*.o
ranlib $lib_name
rm *.o
