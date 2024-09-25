#include <unistd.h>

int	main(void)
{
	char	letter;
	char	upper;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter % 2 == 0)
		{
			upper = letter - 32;
			write(1, &upper, 1);
		}
		else
			write(1, &letter, 1);
		letter++;
	}
	write(1, "\n", 1);
	return (0);
}
