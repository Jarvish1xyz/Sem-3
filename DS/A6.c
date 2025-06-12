#include<stdio.h>

int main() {
    int hour,min,sec;

    printf("Enter second : ");
    scanf("%d", &sec);

    hour =sec/3600;
    sec%=3600;
    min=sec/60;
    sec%=60;

    printf("Time(HH:MM:SS) = %d:%d:%d", hour,min,sec);

    return 0; 
}