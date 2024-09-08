/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:49:27 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 12:30:07 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	main(void)
{
	printf("rush(5,3) の表示\n");
	rush(5, 3);
	printf("\nrush(5,1) の表示\n");
	rush(5, 1);
	printf("\nrush(1,1) の表示\n");
	rush(1, 1);
	printf("\nrush(1,5) の表示\n");
	rush(1, 5);
	printf("\nrush(4,4) の表示\n");
	rush(4, 4);
	printf("\nrush(0,0) の表示\n");
	rush(0, 0);
	printf("\nrush(99,50) の表示\n");
	rush(99, 50);
	return (0);
}
