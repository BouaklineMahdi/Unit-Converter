// currency_converter.h

#ifndef CURRENCY_CONVERTER_H
#define CURRENCY_CONVERTER_H

typedef struct CurrencyNode {
    char currencyCode[4];
    double exchangeRate;
    struct CurrencyNode* next;
} CurrencyNode;

void currencyConverter();

#endif