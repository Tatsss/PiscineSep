/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:29:27 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/25 13:06:33 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 4)
	{
		i = 0;
		while (*av[1])
		{
			if (*av[1] == *av[2])
			{
				av[1] = av[3];
				// ft_strcpy(av[1], av[3]);
			}
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
