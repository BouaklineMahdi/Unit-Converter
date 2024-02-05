// length_converter.c

#include <stdio.h>
#include "length_converter.h"

void lengthConverter() {
    int choice;
    double value;

    printf("\nLength Converter Menu:\n");
    printf("1. Feet to Meters\n");
    printf("2. Meters to Feet\n");
    printf("3. Inches to Centimeters\n");
    printf("4. Centimeters to Inches\n");
    printf("5. Return to main menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter length in feet: ");
            scanf("%lf", &value);
            printf("%.2lf feet is equal to %.2lf meters.\n", value, value * 0.3048);
            break;
        case 2:
            printf("Enter length in meters: ");
            scanf("%lf", &value);
            printf("%.2lf meters is equal to %.2lf feet.\n", value, value / 0.3048);
            break;
        case 3:
            printf("Enter length in inches: ");
            scanf("%lf", &value);
            printf("%.2lf inches is equal to %.2lf centimeters.\n", value, value * 2.54);
            break;
        case 4:
            printf("Enter length in centimeters: ");
            scanf("%lf", &value);
            printf("%.2lf centimeters is equal to %.2lf inches.\n", value, value / 2.54);
            break;
        case 5:
            printf("Returning to the main menu.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}