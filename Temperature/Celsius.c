#include "Celsius.h"

double celsius_to_fahrenheit(double temperature) {
    return (temperature * 9.0 / 5.0) + 32.0;
}

double celsius_to_kelvin(double temperature) {
    return temperature + 273.15;
}