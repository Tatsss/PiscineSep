
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;

	while (src[len])
		++len;
	temp = (char *)malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	temp[len] = '\0';
	while (len >= 0)
	{
		temp[len] = src[len];
		len--;
	}
	return (temp);
}
