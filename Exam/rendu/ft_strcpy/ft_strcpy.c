

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "Hello";
// 	char	dest[] = "123";

// 	printf("%s\t%s\n", dest, str);
// 	ft_strcpy(dest, str);
// 	printf("%s\t%s\n", dest, str);
// 	return (0);
// }
