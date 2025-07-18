#include<stdio.h>

int main() {
    int n;
    printf("Enter a value: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(j==1 || j==i) {
                printf(" %d ", j);
            } else {
                printf(" * ");
            }
        }
        for(int j=i-1; j>=1; j--) {
            if(j==1) {
                printf(" %d ", j);
            } else {
                printf(" * ");
            }
        }
        printf("\n");
    }
}