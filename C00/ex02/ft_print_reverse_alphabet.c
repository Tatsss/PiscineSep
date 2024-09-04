#include <unistd.h>

void ft_print_reverse_alphabet(void) {
    char c;
    for (c = 'z'; c >= 'a'; c--) {
        write(1, &c, 1);
    }
}

int main(void) {
    ft_print_reverse_alphabet();
    return 0;
}