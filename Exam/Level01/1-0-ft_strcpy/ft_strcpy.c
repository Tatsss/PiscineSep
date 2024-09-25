/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tokuda <tokuda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:57:23 by tokuda            #+#    #+#             */
/*   Updated: 2024/09/26 03:03:33 by tokuda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

int	main(void)
{
	char	hoge[] = "abc";
	char	dest[] = "123";

	printf("%s\t%s\n", dest, hoge);
	ft_strcpy(dest, hoge);
	printf("%s\t%s", dest, hoge);
	return (0);
}
