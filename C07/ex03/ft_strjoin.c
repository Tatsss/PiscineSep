/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 05:27:36 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 06:31:22 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (dest[count])
		count++;
	while (src[i])
	{
		dest[count] = src[i];
		count++;
		i++;
	}
	dest[count] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	int		i;

	i = 0;
	if (size == 0)
	{
		temp = malloc(sizeof(char) * ft_strlen(*strs));
		temp = NULL;
		return ("");
	}
	temp = malloc(sizeof(char) * ft_strlen(*strs));
	if (temp == NULL)
		return (NULL);
	while (i < size)
	{
		temp = ft_strcat(temp, strs[i]);
		if (!(i == (size - 1)))
			temp = ft_strcat(temp, sep);
		i++;
	}
	return (temp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*hoge[] = {"ABC", "1234", "defgh"};
// 	char	*fuga;
// 	int		i;

// 	i = 0;
// 	fuga = ft_strjoin(3, hoge, ":");
// 	printf("%s", fuga);
// 	return (0);
// }
