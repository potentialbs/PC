#include <stdlib.h>
#include <stdio.h>

#define MAX_INPT_LNGTH 8

int main() {
    char input[MAX_INPT_LNGTH] = { 0 };

    puts("> ");

    fgets(input, MAX_INPT_LNGTH, stdin);

    puts(input);

    return EXIT_SUCCESS;
}