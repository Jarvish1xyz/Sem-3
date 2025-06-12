#include<stdio.h>

int main() {
    int a,b;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    for(int i=a+1; i<b; i++) {
        int c=0;
        for(int j=2; j<i; j++) {
            if(i%j==0) {
                c++;
            }
        }
        if(c==0) {
            printf("%d ", i);
        }
    }

    return 0;
}