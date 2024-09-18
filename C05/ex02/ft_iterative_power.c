/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 20:56:10 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/18 23:52:16 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	ans = nb;
	while (power > 1)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	int	result;

// 	result = 0;
// 	if (argc == 3)
// 		result = ft_iterative_power(atoi(argv[1]), atoi(argv[2]));
// 	printf("Answer:%d\n", result);
// 	return (0);
// }
