
#include <stdio.h>
#include "temperature_converter.h"

void temperatureConverter() {
    int choice;
    double value;

    printf("\nTemperature Converter Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Return to main menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%lf", &value);
            printf("%.2lf Celsius is equal to %.2lf Fahrenheit.\n", value, (value * 9/5) + 32);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%lf", &value);
            printf("%.2lf Fahrenheit is equal to %.2lf Celsius.\n", value, (value - 32) * 5/9);
            break;
        case 3:
            printf("Returning to the main menu.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}