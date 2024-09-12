/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:27:23 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/12 11:02:25 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
#include <stdio.h>

int	main(void)
{
	int		result;
	char	hoge[] = "Hello World!";
	char	fuga[] = "12345";
	char	foo[] = "";

	result = 0;
	result = ft_strlen(hoge);
	printf("Hello World!は%d文字です。\n", result);
	result = ft_strlen(fuga);
	printf("12345は%d文字です。\n", result);
	result = ft_strlen(foo);
	printf("は%d文字です。\n", result);
	return (0);
}
