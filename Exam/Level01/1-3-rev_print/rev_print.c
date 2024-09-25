/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 21:45:26 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/25 22:03:57 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	main(int ac, char **av)
{
	int	size;

	if (ac == 2)
	{
		size = ft_strlen(av[1]) - 1;
		while (0 < size)
		{
			write(1, &av[1][size], 1);
			size--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
