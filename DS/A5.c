#include<stdio.h>

int main() {
    int year;

    printf("Enter year : ");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0) || year%400==0) {
        printf("Year is leap year.");
    }
    else {
        printf("Year is not leap year.");
    }

    return 0;
}