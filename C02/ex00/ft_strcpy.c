/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:52:40 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/09 10:13:42 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	original[] = "abcdef";
	char	destination[] = "";

	printf("処理前出力結果：%s\t%s\n", original, destination);
	strcpy(destination, original);
	printf("strcpy実行後出力結果：%s\t%s\n", original, destination);
	ft_strcpy(destination, original);
	printf("処理後出力結果：%s\t%s\n", original, destination);
	return (0);
}
