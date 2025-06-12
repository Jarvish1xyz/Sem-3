#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    int p,q;
    printf("Enter 1st number : ");
    scanf("%d", &p);
    printf("Enter 2st number : ");
    scanf("%d", &q);

    for(int i=0; i<n; i++) {
        if(a[i]==p) {
            a[i]=q;
            printf("Index = %d\n", i);
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}