// liquid_converter.c

#include <stdio.h>
#include "liquid_converter.h"

void liquidConverter() {
    int choice;
    double value;

    printf("\nLiquid Converter Menu:\n");
    printf("1. Gallons to Liters\n");
    printf("2. Liters to Gallons\n");
    printf("3. Quarts to Liters\n");
    printf("4. Liters to Quarts\n");
    printf("5. Return to main menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter volume in gallons: ");
            scanf("%lf", &value);
            printf("%.2lf gallons is equal to %.2lf liters.\n", value, value * 3.78541);
            break;
        case 2:
            printf("Enter volume in liters: ");
            scanf("%lf", &value);
            printf("%.2lf liters is equal to %.2lf gallons.\n", value, value / 3.78541);
            break;
        case 3:
            printf("Enter volume in quarts: ");
            scanf("%lf", &value);
            printf("%.2lf quarts is equal to %.2lf liters.\n", value, value * 0.946353);
            break;
        case 4:
            printf("Enter volume in liters: ");
            scanf("%lf", &value);
            printf("%.2lf liters is equal to %.2lf quarts.\n", value, value / 0.946353);
            break;
        case 5:
            printf("Returning to the main menu.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}