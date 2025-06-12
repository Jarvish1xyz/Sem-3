#include<stdio.h>
#define PI 3.14

int main() {
    float r;
    printf("Enter radius : ");
    scanf("%f", &r);

    float area = PI*r*r;
    printf("area = %0.2f", area);

    return 0;
}