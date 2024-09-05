#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {

    int number[3];

    number[0] =  '0';
    while (number[0] <= '7') {

        number[1] =  number[0] + 1;
        while (number[1] <= '8') {

                    number[2] =  number[1] + 1;
                    while (number[2] <= '9') {

                        number[0];
                        number[1];
                        number[2];

                        if (number[0] == '7' && number[1] == '8' && number[2] == '9') {
                            return;
                        }

                        write(1, ', ', 1);
                        // ft_putchar(44);
                        // ft_putchar(32);
                        
                        number[2]++;
                        
                    }

            number[1]++;

        }

        number[0]++;

    }


}


int main(void) {

    ft_print_comb();
    return 0;
}