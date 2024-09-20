/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:11:08 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/19 20:30:00 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	printf("01\n");
	size = ft_strlen(src);
	dest = malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	printf("02\n");
	while (src[i])
	{
		printf("03\n");
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	*hoge;
	char	*new_hoge;

	hoge = "ABVC";
	new_hoge = ft_strdup(hoge);
	printf("%s", new_hoge);
	return (0);
}
