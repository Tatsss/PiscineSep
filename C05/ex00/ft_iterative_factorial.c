/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:51:46 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/17 15:09:21 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ans;

	i = 1;
	if (nb < 0 || nb > 12)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	ans = nb;
	while (nb > i)
	{
		ans *= i;
		i++;
	}
	return (ans);
}

// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	int	result;

// 	result = 0;
// 	if (argc == 2)
// 		result = ft_iterative_factorial(atoi(argv[1]));
// 	printf("Answer:%d\n", result);
// 	return (0);
// }
