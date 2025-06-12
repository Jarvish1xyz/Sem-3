#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++) {
        printf("ENter element-%d : ", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(a[i]==a[j] && i!=j) {
                printf("array contains duplicate number");
                return 0;
            }
        }
    }

    printf("array does not contains duplicate number");

    return 0;
}