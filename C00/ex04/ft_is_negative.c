#include <unistd.h>

void ft_is_negative(int n) {
    
    if (n < 0) {
        write(1, "N", 1);

    } else {
        write(1, "P", 1);

    }

}

int main (void) {
// int main(int argc, char *argv[]) {
    // int cline = argv[1];
    // ft_is_negative((int)argv[1]);
    ft_is_negative(99);
    ft_is_negative(-50);
    ft_is_negative(0);
    return 0;
}

