// main.c
//gcc main.c length_converter.c liquid_converter.c temperature_converter.c time_converter.c currency_converter.c -o unit_converter
//./unit_converter

#include <stdio.h>
#include "length_converter.h"
#include "liquid_converter.h"
#include "temperature_converter.h"
#include "time_converter.h"
#include "currency_converter.h"

int main() {
    int choice;

    while (1) {
        printf("\nUnit Converter Menu:\n");
        printf("1. Length\n");
        printf("2. Liquid\n");
        printf("3. Temperature\n");
        printf("4. Time\n");
        printf("5. Currency\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                lengthConverter();
                break;
            case 2:
                liquidConverter();
                break;
            case 3:
                temperatureConverter();
                break;
            case 4:
                timeConverter();
                break;
            case 5:
                currencyConverter();
                break;
            case 6:
                printf("Exiting the Unit Converter. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}