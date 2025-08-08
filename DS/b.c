#include<stdio.h>

int main() {
    int a,b;
    printf("Enter length of array1 : ");
    scanf("%d", &a);
    printf("Enter length of array2 : ");
    scanf("%d", &b);

    int arr1[a], arr2[b];
    int s=a+b;
    int temp[s], ans[s];
    printf("Enter elements of array1 : ");
    for(int i=0; i<a; i++) {
        scanf("%d", &arr1[i]);
        temp[i] = arr1[i];
    }
    printf("Enter elements of array2 : ");
    for(int i=0; i<b; i++) {
        scanf("%d", &arr2[i]);
        temp[a+i] = arr2[i];
    }
    int max = temp[0];
    for(int i=1; i<s; i++) {
        if(temp[i] > max) {
            max = temp[i];
        }
    }

    int k=0;
    for(int i=0; i<=s; i++) {
        int min = temp[0];
        for(int j=0; j<=s; j++) {
            if(min> temp[j]) {
                min = temp[j];
                k=j;
            }
        }
        ans[i] = min;
        temp[k] = max + 1;
    }
}