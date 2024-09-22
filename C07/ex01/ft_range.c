/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:01:06 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 05:14:44 by tokuda           ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void)
// {
// 	int	*hoge;
// 	int	min;
// 	int	max;
// 	int	i;

// 	min = 5;
// 	max = 15;
// 	i = 0;
// 	hoge = ft_range(min, max);
// 	while (i < (max - min))
// 	{
// 		printf("%d,", hoge[i]);
// 		i++;
// 	}
// 	return (0);
// }
