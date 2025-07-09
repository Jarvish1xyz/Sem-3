#include<stdio.h>

int main() {
    int n,size=20;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[size];
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", &a[i]);
    }

    int index;
    printf("Ennter index : ");
    scanf("%d", &index);

    for(int i=index; i<n-1; i++) {
        a[i]=a[i+1];
    }
    n--;
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}