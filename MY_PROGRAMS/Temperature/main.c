#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include "Celsius.h"
#include "Fahrenheit.h"
#include "Kelvin.h"

static char read_scale(const char *prompt) {
    char scale;

    printf("%s", prompt);
    if (scanf(" %c", &scale) != 1) {
        return '\0';
    }

    scale = (char) toupper((unsigned char) scale);
    if (scale != 'C' && scale != 'F' && scale != 'K') {
        return '\0';
    }

    return scale;
}

static int convert_temperature(double temperature, char from, char to,
                               double *converted_temperature) {
    if ((from == 'C' && temperature < -273.15) ||
        (from == 'F' && temperature < -459.67) ||
        (from == 'K' && temperature < 0.0)) {
        return 0;
    }

    if (from == to) {
        *converted_temperature = temperature;
        return 1;
    }

    switch (from) {
        case 'C':
            *converted_temperature = to == 'F'
                ? celsius_to_fahrenheit(temperature)
                : celsius_to_kelvin(temperature);
            return 1;
        case 'F':
            *converted_temperature = to == 'C'
                ? fahrenheit_to_celsius(temperature)
                : fahrenheit_to_kelvin(temperature);
            return 1;
        case 'K':
            *converted_temperature = to == 'C'
                ? kelvin_to_celsius(temperature)
                : kelvin_to_fahrenheit(temperature);
            return 1;
        default:
            return 0;
    }
}

int main(void) {
    double temperature;
    double converted_temperature;
    char from;
    char to;

    printf("Temperature Converter\n");
    printf("Scales: C = Celsius, F = Fahrenheit, K = Kelvin\n\n");

    from = read_scale("Enter the input scale (C/F/K): ");
    if (from == '\0') {
        fprintf(stderr, "Error: please enter C, F, or K.\n");
        return 1;
    }

    printf("Enter the temperature: ");
    if (scanf("%lf", &temperature) != 1 || !isfinite(temperature)) {
        fprintf(stderr, "Error: please enter a finite numeric temperature.\n");
        return 1;
    }

    to = read_scale("Enter the output scale (C/F/K): ");
    if (to == '\0') {
        fprintf(stderr, "Error: please enter C, F, or K.\n");
        return 1;
    }

    if (!convert_temperature(temperature, from, to, &converted_temperature)) {
        fprintf(stderr, "Error: temperature cannot be below absolute zero.\n");
        return 1;
    }

    printf("%.2f %c = %.2f %c\n", temperature, from,
           converted_temperature, to);
    return 0;
}