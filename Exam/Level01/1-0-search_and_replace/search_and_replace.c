/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:29:27 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/25 16:41:19 by tokuda           ###   ########.fr       */
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
		if (av[2][1] == '\0' && av[3][1] == '\0')
		{
			i = 0;
			while (av[1][i])
			{
				if (av[1][i] == av[2][0])
				{
					av[1][i] = av[3][0];
				}
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
