/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 21:17:16 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/14 21:18:00 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	ans;

	if (nb == 0 && power == 0)
		return (1);
	else if (nb <= 0 || power <= 0)
		return (0);
	ans = nb;
	while (power > 1)
	{
		ans *= nb;
		power--;
	}
	return (ans);
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	result;

	result = 0;
	if (argc == 3)
		result = ft_recursive_power(atoi(argv[1]), atoi(argv[2]));
	printf("Answer:%d\n", result);
	return (0);
}
