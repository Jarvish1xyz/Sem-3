#include<stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Data : \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n-1; i++) {
        int min=i;
        for(int j=i+1; j<n; j++) {
            if(arr[min]>arr[j]) {
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}