/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:19:42 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/20 18:27:12 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac != 2)
		write(1, "a", 1);
	else
	{
		while (*av[1])
		{
			if (*av[1] == 'a')
			{
				write(1, "a", 1);
				break ;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
