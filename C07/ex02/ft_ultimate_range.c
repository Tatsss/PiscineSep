/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 04:52:33 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 05:27:12 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
		return (0);
	temp = malloc(sizeof(int) * (max - min));
	if (temp == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * size);
	if (range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ft_range(min, max);
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*hoge;
// 	int	min;
// 	int	max;
// 	int	result;
// 	int	i;

// 	min = 5;
// 	max = 15;
// 	i = 0;
// 	result = ft_ultimate_range(&hoge, min, max);
// 	printf("Size:%d\n", result);
// 	while (i < (max - min))
// 	{
// 		printf("%d,", hoge[i]);
// 		i++;
// 	}
// 	return (0);
// }
