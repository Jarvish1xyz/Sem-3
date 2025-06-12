#include<stdio.h>

int main() {
    int year,week,days;

    printf("Enter days : ");
    scanf("%d", &days);

    year=days/365;
    days%=365;
    week=days/7;
    days%=7;

    printf("%dyear, %dweek, %ddays", year, week, days);

    return 0;
}