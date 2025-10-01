#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {
    unsigned int dec;
    int i;
    char inverted_bin[sizeof(unsigned int) * 8];

    if (argc < 2) {
        puts("Usage: dec2bin <decimal_number>");
        return EXIT_FAILURE;
    }

    dec = abs(atoi(argv[1]));
    printf("%d(d) = ", dec);

    for (i = 0; dec != 0; i++, dec /= 2) {
        inverted_bin[i] = (dec % 2) + '0';
    }

    for (--i; i >= 0; i--) {
        printf("%c", inverted_bin[i]);
    }
    puts("(b)");


    return EXIT_SUCCESS;
}