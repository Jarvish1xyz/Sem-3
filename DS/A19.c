#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[n],max,min;
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", &a[i]);
    }
    max=a[0],min=a[0];
    int mx,mn;
    for(int i=0; i<n; i++) {
        if(max<a[i]) {
            max=a[i];
            mx=i;
        }
        if(min>a[i]) {
            min=a[i];
            mn=i;
        }
    }

    printf("Position of smallest number = %d\n",mn);
    printf("Position of largest number = %d",mx);
}