/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 06:44:54 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/24 10:27:18 by tokuda           ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (s1[i] == '\0')
		return (0);
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
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

	array = malloc(sizeof(char *) * ft_strlen(str) + 1);
	if (!array)
		return (NULL);
	i = 0;
	n = 0;
	wordcount = 0;
	while (i <= ft_strlen(str))
	{
		if (!ft_strncmp(&str[i], charset, ft_strlen(charset)))
		{
			array[n] = ft_putdata(str, i - wordcount, wordcount);
			wordcount = 0;
			n++;
			i += (ft_strlen(charset) - 1);
		}
		else
			wordcount++;
		i++;
	}
	return (array);
}

#include <stdio.h>

int	main(void)
{
	char	*hoge;
	char	**fuga;
	char	*hoge2;
	char	**fuga2;
	char	*hoge3;
	char	**fuga3;
	int		i;
	int		size;

	size = 4;
	i = 0;
	printf(": のセパレーター\n");
	hoge = "ABC:12;34:defgh:/9/nd";
	fuga = ft_split(hoge, ":");
	while (i < size)
	{
		printf("%s\n", fuga[i]);
		i++;
	}
	printf("\n");
	printf(":/ のセパレーター\n");
	hoge2 = "ABC:/12:;34:/defgh:/9/nd";
	fuga2 = ft_split(hoge2, ":/");
	i = 0;
	size = 4;
	while (i < size)
	{
		printf("%s\n", fuga2[i]);
		i++;
	}
	i = 0;
	printf("\n");
	printf(":/A のセパレーター\n");
	hoge3 = "ABC:/A12:;34:/Adefgh:/A9/nd";
	fuga3 = ft_split(hoge3, ":/A");
	while (i < size)
	{
		printf("%s\n", fuga3[i]);
		i++;
	}
	return (0);
}
