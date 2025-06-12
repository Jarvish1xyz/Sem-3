#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++) {
        for(int k=1; k<=n-i; k++) {
            printf(" ");
        }
        int p=1;
        for(int j=1; j<=i; j++) {
            printf("%d ", p);
            p=(i-j)*p/j;
        }
        printf("\n");
    }

    return 0;
}