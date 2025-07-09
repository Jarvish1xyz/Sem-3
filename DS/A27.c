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

    int index,val;
    printf("Enter value : ");
    scanf("%d", &val);

    for(int i=0; i<n; i++) {
        if(val==a[i]){
            index=i;
        }
    }
    for(int i=index; i<n+1; i++) {
        a[i]=a[i+1];
    }
    a[index+1]=val;
    n--;
    for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}