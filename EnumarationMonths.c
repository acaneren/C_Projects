#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
} Months;

void showMonth(Months m) {
    switch (m) {
        case January: printf("January");
            break;
        case February: printf("February");
            break;
        case March: printf("March");
            break;
        case April: printf("April");
            break;
        case May: printf("May");
            break;
        case June: printf("June");
            break;
        case July: printf("July");
            break;
        case August: printf("August");
            break;
        case September: printf("September");
            break;
        case October: printf("October");
            break;
        case November: printf("November");
            break;
        case December: printf("December");
            break;
        default: printf("Invalid month. Please enter a value between 1-12");
            break;
    }
}

int main() {
    Months x;

    printf("Enter the number of the month: ");
    scanf("%d", &x);

    showMonth(x);

    return 0;
}

