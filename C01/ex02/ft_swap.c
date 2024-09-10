/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:30:30 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 12:56:36 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int	hoge;
// 	int	fuga;

// 	hoge = 1;
// 	fuga = 2;
// 	printf("Before swap:	hoge %d\n", hoge);
// 	printf("Before swap:	fuga %d\n", fuga);
// 	ft_swap(&hoge, &fuga);
// 	printf("After swap:	hoge %d\n", hoge);
// 	printf("After swap:	fuga %d\n", fuga);
// 	return (0);
// }
