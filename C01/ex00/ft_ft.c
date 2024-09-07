/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:27:07 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/06 18:27:01 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	*p;
	int	i;

	p = &i;
	*p = 10;
	int num = 1;  // int型変数
	int *p_num;   // int型ポインタ変数
	p_num = &num; // ポインタ変数p_numに変数numアドレスを代入
	printf("int型変数numの値:%d\n", num);
	printf("int型ポインタ変数p_num:%p\n", p_num);
	printf("p = %p", p);
	printf("i = %p", i);
	return (0);
}
