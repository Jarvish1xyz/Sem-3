#include<stdio.h>
#include<math.h>


int* merge(int arr[], int low, int mid, int high) {
    int h=low, i=low, j=mid+1;
    int brr[high+1];

    while(h<=mid && j<=high) {
        if(arr[h]<=arr[j]) {
            brr[i++]=arr[h++];
        }
        else {
            brr[i++]=arr[j++];
        }
    }
    
    int a,b;
    if(h>mid) {
        a=j;
        b=high;
    }
    else {
        a=h;
        b=mid;
    }

    while(a!=b) {
        brr[i++]=arr[a++];
    }

    return brr;

}



int* mergeSort(int arr[], int low, int high) {
    int mid = floor((low+high)/2);
    if(low<high) {
    
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
    }
        int *abc = merge(arr, low, mid, high);
        return abc;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter Data : \n");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ans = mergeSort(arr, 0, n-1);

    for(int i=0; i<n; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}