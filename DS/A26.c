#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[20];
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", &a[i]);
    }

    int index,val;
    printf("Enter value : ");
    scanf("%d", &val);

    for(int i=0; i<n; i++) {
        if(val>a[i] && val<a[i+1]){
            index=i;
        }
    }
    for(int i=n; i>index-1; i--) {
        a[i+1]=a[i];
    }
    a[index+1]=val;
    n++;
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}