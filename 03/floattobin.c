#include <stdlib.h>
#include <stdio.h>

union float_int {
    float f;
    unsigned int i;
};

int main (int argc, char *argv[]) {
    union float_int dec;
    int i;

    if (argc < 2) {
        puts("Usage: float2bin <floating_number>");
        return EXIT_FAILURE;
    }

    dec.f = atof(argv[1]);
    printf("%f(d) = ", dec.f);

    for (i = sizeof(dec.i) * 8 - 1; i >= 0; i--) {
        printf("%c", ((dec.i >> i) & 1) + '0');
    }

    puts("(b)");

    return EXIT_SUCCESS;
}