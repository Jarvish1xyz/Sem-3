#include<stdio.h>

int main() {
    int n,count=0;

    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=2; i<n; i++) {
        if(n%i==0) {
            count++;
        }
    }
    if(count==0) {
        printf("n is prime.");
    }
    else {
        printf("n is not prime.");
    }
}