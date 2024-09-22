/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 06:44:54 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 07:02:49 by tokuda           ###   ########.fr       */
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

char	**ft_split(char *str, char *charset)
{
	char	temp;

	temp = malloc(sizeof(char) * ft_strlen(str) + 1);
	return (0);
}
#include <stdio.h>

int	main(void)
{
	char	*hoge[] = "ABC:1234:defgh";
	char	*fuga;
	int		i;

	i = 0;
	fuga = ft_split(hoge, ":");
	printf("%s", fuga);
	return (0);
}
