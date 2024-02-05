// currency_converter.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "currency_converter.h"

CurrencyNode* createCurrencyNode(const char* code, double rate) {
    CurrencyNode* newNode = (CurrencyNode*)malloc(sizeof(CurrencyNode));
    if (newNode != NULL) {
        strncpy(newNode->currencyCode, code, sizeof(newNode->currencyCode) - 1);
        newNode->exchangeRate = rate;
        newNode->next = NULL;
    }
    return newNode;
}

void freeCurrencyList(CurrencyNode* head) {
    while (head != NULL) {
        CurrencyNode* temp = head;
        head = head->next;
        free(temp);
    }
}

void printCurrencyList(CurrencyNode* head) {
    printf("Available Currencies:\n");
    while (head != NULL) {
        printf("%s\n", head->currencyCode);
        head = head->next;
    }
}

double getExchangeRate(CurrencyNode* head, const char* from, const char* to) {
    while (head != NULL) {
        if (strcmp(head->currencyCode, from) == 0) {
            while (head != NULL) {
                if (strcmp(head->currencyCode, to) == 0) {
                    return head->exchangeRate;
                }
                head = head->next;
            }
        }
        head = head->next;
    }
    return -1.0;  // Indicates an invalid exchange rate
}

void currencyConverter() {
    CurrencyNode* head = NULL;

    // Initialize currency exchange rates (This is just what I currently have, can add as many currencies I want)
    CurrencyNode* usdNode = createCurrencyNode("USD", 1.0);
    CurrencyNode* eurNode = createCurrencyNode("EUR", 0.85);
    CurrencyNode* jpyNode = createCurrencyNode("JPY", 110.0);
    CurrencyNode* gbpNode = createCurrencyNode("GBP", 0.73);
    CurrencyNode* audNode = createCurrencyNode("AUD", 1.30);
    CurrencyNode* cadNode = createCurrencyNode("CAD", 1.26);
    CurrencyNode* chfNode = createCurrencyNode("CHF", 0.92);
    CurrencyNode* cnyNode = createCurrencyNode("CNY", 6.47);
    CurrencyNode* sekNode = createCurrencyNode("SEK", 8.50);
    CurrencyNode* nzdNode = createCurrencyNode("NZD", 1.40);

    // Link the nodes
    usdNode->next = eurNode;
    eurNode->next = jpyNode;
    jpyNode->next = gbpNode;
    gbpNode->next = audNode;
    audNode->next = cadNode;
    cadNode->next = chfNode;
    chfNode->next = cnyNode;
    cnyNode->next = sekNode;
    sekNode->next = nzdNode;

    head = usdNode;

    int choice;
    double amount;
    char fromCurrency[4], toCurrency[4];

    while (1) {
        printf("\nCurrency Converter Menu:\n");
        printf("1. Convert Currency\n");
        printf("2. Display Available Currencies\n");
        printf("3. Return to main menu\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount: ");
                scanf("%lf", &amount);
                printf("Enter source currency code: ");
                scanf("%s", fromCurrency);
                printf("Enter target currency code: ");
                scanf("%s", toCurrency);

                double exchangeRate = getExchangeRate(head, fromCurrency, toCurrency);
                if (exchangeRate != -1.0) {
                    double convertedAmount = amount * exchangeRate;
                    printf("%.2lf %s is equal to %.2lf %s.\n", amount, fromCurrency, convertedAmount, toCurrency);
                } else {
                    printf("Invalid currency codes or exchange rate not available.\n");
                }
                break;
            case 2:
                printCurrencyList(head);
                break;
            case 3:
                freeCurrencyList(head);
                printf("Returning to the main menu.\n");
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}