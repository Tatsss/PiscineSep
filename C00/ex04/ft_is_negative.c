#include <unistd.h>
#include <stdlib.h>

void ft_is_negative(int n) {
    
    if (n < 0) {
        write(1, "N", 1);

    } else {
        write(1, "P", 1);

    }

}


int main(int argc, char *argv[]) {

    ft_is_negative(atoi(argv[1]));
    return 0;

}

