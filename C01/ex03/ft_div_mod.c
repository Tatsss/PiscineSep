/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:48:30 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 12:53:37 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	hoge;
// 	int	fuga;
// 	int	*div;
// 	int	*mod;

// 	hoge = 50;
// 	fuga = 6;
// 	div = &hoge;
// 	mod = &fuga;
// 	printf("Calc: %d / %d = \n", hoge, fuga);
// 	ft_div_mod(hoge, fuga, div, mod);
// 	printf("Ans: = %d ... %d\n", *div, *mod);
// 	return (0);
// }
