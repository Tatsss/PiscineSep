/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:41:20 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/15 16:51:15 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	val;
	int	flg;

	i = 2;
	val = 0;
	flg = 0;
	printf("%d\n", nb);
	while (i < nb && flg == 1)
	{
		printf("%d\n", i);
		printf("%d\n", nb);
		if (nb % i == 0)
		{
			val = i;
			if (flg == 1)
				return (val);
			flg = 1;
		}
		i++;
	}
	return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	result;

	result = 0;
	if (argc == 2)
		result = ft_find_next_prime(atoi(argv[1]));
	printf("Answer:%d\n", result);
	return (0);
}
