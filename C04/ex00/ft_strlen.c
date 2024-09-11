/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:27:23 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/11 22:09:12 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
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

	result = 0;
	printf("文00字です。");
	result = ft_strlen(hoge);
	printf("%d文字です。", result);
	printf("文字です。");
	return (0);
}
