/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:45:23 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/08 12:40:33 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	hoge;
	int	fuga;

	hoge = 50;
	fuga = 6;
	printf("Calc: %d / %d = \n", hoge, fuga);
	ft_ultimate_div_mod(&hoge, &fuga);
	printf("Ans: = %d ... %d\n", hoge, fuga);
	return (0);
}
