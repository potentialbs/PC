#include <stdlib.h>
#include <stdio.h>
#include <string.h>

double celsius_to_fahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main(int argc, char *argv[]) {
    double celsius, fahrenheit, temp;

    if (argc < 2) {
        return EXIT_FAILURE;
    }

    temp = atof(argv[1]);

    if (strcmp(argv[2], "F") == 0) {
        fahrenheit = celsius_to_fahrenheit(temp);
        printf("%.2f°C = %.2f°F\n", temp, fahrenheit);
    } 

    else if (strcmp(argv[2], "C") == 0) {
        celsius = fahrenheit_to_celsius(temp);
        printf("%.2f°F = %.2f°C\n", temp, celsius);
    } 

    else {
        printf("Usage: ./temp <temperature> <C|F> (to celsius|to fahrenheit)\n");
    }

    return EXIT_SUCCESS;
}