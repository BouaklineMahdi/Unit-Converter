// time_converter.c

#include <stdio.h>
#include "time_converter.h"

void timeConverter() {
    int choice;
    double value;

    printf("\nTime Converter Menu:\n");
    printf("1. Hours to Minutes\n");
    printf("2. Minutes to Hours\n");
    printf("3. Seconds to Minutes\n");
    printf("4. Minutes to Seconds\n");
    printf("5. Return to main menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter time in hours: ");
            scanf("%lf", &value);
            printf("%.2lf hours is equal to %.2lf minutes.\n", value, value * 60);
            break;
        case 2:
            printf("Enter time in minutes: ");
            scanf("%lf", &value);
            printf("%.2lf minutes is equal to %.2lf hours.\n", value, value / 60);
            break;
        case 3:
            printf("Enter time in seconds: ");
            scanf("%lf", &value);
            printf("%.2lf seconds is equal to %.2lf minutes.\n", value, value / 60);
            break;
        case 4:
            printf("Enter time in minutes: ");
            scanf("%lf", &value);
            printf("%.2lf minutes is equal to %.2lf seconds.\n", value, value * 60);
            break;
        case 5:
            printf("Returning to the main menu.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
}