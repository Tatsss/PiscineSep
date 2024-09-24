/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 06:44:54 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/24 00:51:05 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		++i;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int	is_valid(char str, char charset)
{
	if (str == charset || str == '\0')
	{
		return (1);
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_putdata(char *str, int start, int len)
{
	char	*data;

	data = malloc(sizeof(char) * (len + 1));
	if (!data)
		return (NULL);
	ft_strncpy(data, &str[start], len);
	return (data);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		n;
	int		wordcount;
	char	**array;

	array = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!array)
		return (NULL);
	i = 0;
	n = 0;
	wordcount = 0;
	while (i <= ft_strlen(str))
	{
		if (is_valid(str[i], *charset))
		{
			array[n] = ft_putdata(str, i - wordcount, wordcount);
			wordcount = 0;
			n++;
		}
		else
			wordcount++;
		i++;
	}
	return (array);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*hoge;
// 	char	**fuga;
// 	int		i;
// 	int		size;

// 	hoge = "ABC:1234:defgh:9nd";
// 	fuga = ft_split(hoge, ":");
// 	i = 0;
// 	size = 4;
// 	while (i < size)
// 	{
// 		printf("%s\n", fuga[i]);
// 		i++;
// 	}
// 	return (0);
// }
