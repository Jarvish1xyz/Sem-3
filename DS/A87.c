#include<stdio.h>

int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    int a[n];
    for(int i=0; i<n; i++) {
        printf("Enter value : ");
        scanf("%d", &a[i]);
    }

    int f;
    printf("Enter value to find : ");
    scanf("%d", &f);
    int k=0;

    for(int i=0; i<n; i++) {
        if(a[i]==f) {
            k++;
        }
    }

    if(k>0) {
        printf("%d found.", f);
    }
    else {
        printf("%d not found.", f);
    }

    return 0;
}