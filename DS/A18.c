#include<stdio.h>

int main() {
    int n;
    
    printf("Enter n : ");
    scanf("%d", &n);

    int a[n],ans=0;

    for(int i=1; i<=n; i++) {
        printf("Enter element-%d : ", i+1);
        scanf("%d", &a[i]);
        ans+=a[i];
    }

    float avg = ans/(n*1.0);

    printf("avg = %0.2f", avg);

    return 0;
}