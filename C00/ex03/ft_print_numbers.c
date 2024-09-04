#include <unistd.h>

void ft_print_numbersn(void) {
    // int i;

    // for (i = 0; i <= 10; i++) {
    //     write(1, &i, 10);
    // }

    int	count;

	count = 48;
	while (count <= 57)
	{
		write(1, &count, 1);
		count++;
	}
}

int main(void) {
    ft_print_numbersn();
    return 0;
}