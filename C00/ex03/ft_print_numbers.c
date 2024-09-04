#include <unistd.h>

void ft_print_numbersn(void) {
    int i = 48;

    while (i <= 57) {
        write(1, &i, 1);
        i++;
    }
}

int main(void) {
    ft_print_numbersn();
    return 0;
}