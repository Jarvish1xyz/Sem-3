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
    int k=n-1;

    for(int i=0; i<n-1; i++) {
        int ex=0;
        for(int j=0; j<k; j++) {
            if(arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                ex++;
            }
        }
        if(ex==0) {
            break;
        }
        else {
            k--;
        }
    }

    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}