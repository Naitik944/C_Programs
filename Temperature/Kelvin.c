#include "Kelvin.h"

double kelvin_to_celsius(double temperature) {
    return temperature - 273.15;
}

double kelvin_to_fahrenheit(double temperature) {
    return (temperature - 273.15) * 9.0 / 5.0 + 32.0;
}
