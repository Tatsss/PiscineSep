/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 06:44:54 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/26 05:10:24 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_valid(char ch, char *charset)
{
	while (*charset)
		if (ch == *charset++)
			return (1);
	return (0);
}

int	ft_arraycount(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (is_valid(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !is_valid(*str, charset))
			str++;
	}
	return (count);
}

char	*ft_putdata(char *str, char *charset)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (str[len] && !is_valid(str[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		word_count;
	int		i;

	word_count = ft_arraycount(str, charset);
	i = 0;
	array = malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return (NULL);
	while (i < word_count)
	{
		while (is_valid(*str, charset))
			str++;
		array[i] = ft_putdata(str, charset);
		while (*str && !is_valid(*str, charset))
			str++;
		i++;
	}
	array[i] = 0;
	return (array);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*hoge;
// 	char	**fuga;
// 	int		i;
// 	int		size;
// 	char	*hoge2;
// 	char	**fuga2;
// 	char	*hoge3;
// 	char	**fuga3;

// 	size = 4;
// 	i = 0;
// 	printf(": のセパレーター\n");
// 	hoge = "ABC:12;34:defg h:/9/nd";
// 	fuga = ft_split(hoge, ":");
// 	while (i < size)
// 	{
// 		printf("%s\n", fuga[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf(":/ のセパレーター\n");
// 	hoge2 = "ABC:/12:;34:/defgh:/9/nd";
// 	fuga2 = ft_split(hoge2, ":/");
// 	i = 0;
// 	size = 6;
// 	while (i < size)
// 	{
// 		printf("%s\n", fuga2[i]);
// 		i++;
// 	}
// 	i = 0;
// 	size = 7;
// 	printf("\n");
// 	printf(":/A のセパレーター\n");
// 	hoge3 = "ABC:/A12:;34:/fAdefgh:/A9/nd";
// 	fuga3 = ft_split(hoge3, ":/A");
// 	while (i < size)
// 	{
// 		printf("%s\n", fuga3[i]);
// 		i++;
// 	}
// 	return (0);
// }
