/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:47:36 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 04:07:23 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		size;

	size = sizeof(char) * (ft_strlen(src) + 1);
	temp = malloc(size);
	ft_strncpy(temp, src, size);
	return (temp);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*hoge;
// 	char	*fuga;
// 	char	*foo;
// 	char	strhoge[] = "Hello";
// 	char	strfuga[] = "Hello";
// 	char	strnull[] = "Hello\0\0";

// 	// char	str[] = "HelloWorldHelloWorldHelloWorld";
// 	hoge = NULL;
// 	printf("strdup関数:\t\t%s\n", hoge);
// 	hoge = strdup(strhoge);
// 	printf("strdup関数:\t\t%s\n", hoge);
// 	foo = strdup(strnull);
// 	printf("strdup関数:\t\t%s\n", foo);
// 	strhoge[0] = 'a';
// 	printf("strdup関数 書き換え後:\t%s\n", hoge);
// 	printf("----------------------------------------\n");
// 	fuga = NULL;
// 	printf("ft_strdup関数:\t\t%s\n", fuga);
// 	fuga = ft_strdup(strfuga);
// 	printf("ft_strdup関数:\t\t%s\n", fuga);
// 	strfuga[0] = 'a';
// 	printf("ft_strdup関数 書き換え後:\t%s\n", fuga);
// 	return (0);
// }
