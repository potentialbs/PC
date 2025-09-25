#include <stdlib.h>
#include <stdio.h>

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main(int argc, char *argv[]) {
    double celsius, fahrenheit;

    if (argc < 2) {
        return EXIT_FAILURE;
    }

    celsius = atof(argv[1]);
    fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    
    return EXIT_SUCCESS;
}