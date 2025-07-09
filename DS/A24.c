#include<stdio.h>

int main() {
    int n,size=50;
    printf("Enter n : ");
    scanf("%d", &n);

    int arr[size];
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", &arr[i]);
    }

    int index,val;
    printf("Enter index : ");
    scanf("%d", &index);
    printf("Enter value : ");
    scanf("%d", &val);

    for(int i=n; i>index; i--) {
        arr[i]=arr[i-1];
    }
    arr[index]=val;
    n++;
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
} 