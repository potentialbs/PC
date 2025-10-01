#include <stdio.h>
#include <stdlib.h>

unsigned long factorial(unsigned int n) {
    unsigned long result = 1;
    unsigned int i;
    for (i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main(void) {
    unsigned int n;
    printf("Zadejte cislo: ");
    if (scanf("%u", &n) != 1) {
        printf("Neplatny vstup.\n");
        return 1;
    }
    printf("%u! = %lu\n", n, factorial(n));
    return EXIT_SUCCESS;
}