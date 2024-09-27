#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	max;

	if (len == 0)
		return (0);
	max = tab[0];
	while (len)
	{
		if (tab[len - 1] > max)
			max = tab[len - 1];
		len--;
	}
	return (max);
}

int	main(void)
{
	int	hoge[50];

	hoge[0] = 52;
	hoge[1] = 3;
	hoge[2] = 10;
	hoge[3] = 190;
	printf("%d", max(hoge, 4));
	return (0);
}
