#include "Fahrenheit.h"

double fahrenheit_to_celsius(double temperature) {
    return (temperature - 32.0) * 5.0 / 9.0;
}

double fahrenheit_to_kelvin(double temperature) {
    return (temperature - 32.0) * 5.0 / 9.0 + 273.15;
}
