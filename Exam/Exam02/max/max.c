/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:18:58 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/20 10:35:04 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int,
// the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

#include <stdio.h>

int	max(int *nbr, int len)
{
	int	max;

	max = nbr[0];
	while (len)
	{
		if (nbr[len] > max)
			max = nbr[len];
	}
	return (max);
}

int	main(void)
{
	int	*hoge;
	int	result;

	result = 0;
	hoge[0] = 2;
	hoge[1] = 18;
	hoge[2] = 35;
	result = max(hoge, 3);
	printf("%d", result);
	return (0);
}
