/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:31:22 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/18 12:45:05 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

// else if (nb <= 1) // ok
// 	return (1);

// if (nb == 0) // ok
// 	return (1);

// if (nb == 0 || nb == 1) // ok
// 	return (1);

// if (nb == 0 || nb == 1)
// {
// 	return (1);
// }
// #include <stdio.h>
// #include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	int	result;

// 	result = 0;
// 	if (argc == 2)
// 		result = ft_recursive_factorial(atoi(argv[1]));
// 	printf("Answer:%d\n", result);
// 	return (0);
// }
