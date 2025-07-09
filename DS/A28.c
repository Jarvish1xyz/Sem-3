#include<stdio.h>

int main() {
    int n,p=0,t=0;
    printf("Enter n : ");
    scanf("%d", &n);
    int a[n];

    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++) {
        if(a[i]!='\0') {
            printf("%d ", a[i]);
        }
        
        for(int j=i+1; j<n; j++) {
            if(a[i]==a[j]) {
                t++;
                a[j]='\0';
            }
        }
        
    }
    return 0;
}