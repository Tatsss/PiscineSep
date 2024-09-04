#include <unistd.h>

int main(void) {
    write(1, "Hello World!\n", 13);
    /* printf("Hello World!\n"); */
    return 0;

}