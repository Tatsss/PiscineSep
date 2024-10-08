/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 05:27:36 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/26 05:10:17 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len = total_len + ((size - 1) * ft_strlen(sep)) + 1;
	return (total_len);
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
	int		i;
	char	*temp;

	if (size == 0)
	{
		temp = (char *)malloc(sizeof(char));
		*temp = '\0';
		return (temp);
	}
	temp = malloc(sizeof(char) * ft_total_len(size, strs, sep));
	if (!temp)
		return (NULL);
	i = 0;
	*temp = '\0';
	while (i < size)
	{
		ft_strcat(temp, strs[i]);
		if (i < size - 1)
			ft_strcat(temp, sep);
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
// 	printf("%s\n", fuga);
// 	return (0);
// }
