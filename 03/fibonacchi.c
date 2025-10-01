#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    int a = 0, b = 1, i, temp;
    if (n == 0) return 0;
    if (n == 1) return 1;
    for (i = 2; i <= n; ++i) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main(void) {
    int n;
    printf("Zadejte index prvku Fibonacciho posloupnosti: ");
    scanf("%d", &n);
    printf("Fibonacciho cislo na pozici %d je %d\n", n, fibonacci(n));
    return EXIT_SUCCESS;
}