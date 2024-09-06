/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 18:52:23 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/06 19:24:30 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// void	ft_ft(int *nbr)
// {
// 	*nbr = 42;
// 	printf(nbr);
// 	printf(*nbr);
// }

int	main(void)
{
	int	num;
	int	*p_num;
	int	**pp_num;

	num = 1;
	p_num = &num;
	pp_num = &p_num;
	printf("int型変数numの値:%d\n", num);
	printf("int型ポインタ変数p_numの参照先の値:%d\n", *p_num);
	printf("int型ポインタ変数p_num:%p\n", p_num);
	printf("int型ポインタ変数のポインタpp_num:%p\n", pp_num);
	printf("int型変数numのアドレス:%p\n", &num);
	printf("int型変数numのアドレス先の値:%d\n", *(&num));
	// printf("test", num);
	// printf("again", p_num);
	// int	*value;
	// ft_ft();
	return (0);
}
