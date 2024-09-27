/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:33:35 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/25 10:11:34 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_lettercount(char c)
{
	int	ans;

	ans = 0;
	if (c >= 'A' && c <= 'Z')
		ans = c - 'A' + 1;
	else if (c >= 'a' && c <= 'z')
		ans = c - 'a' + 1;
	else
		ans = 1;
	return (ans);
}

int	main(int ac, char **av)
{
	int	i;
	int	count;

	i = 0;
	if (ac == 2)
	{
		while (*av[1])
		{
			count = ft_lettercount(*av[1]);
			while (count > 0)
			{
				write(1, av[1], 1);
				count--;
			}
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
