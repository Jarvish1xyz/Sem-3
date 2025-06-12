#include<stdio.h>

int main() {
    int n=5,p=1;
    char k='A';

    for(int i=1; i<=n; i++) {
        for(int j=n; j>=i; j--) {
            printf("* ");
        }
        printf("\n");
    }
    
    for(int i=1; i<=n; i++) {
        int k=1;
        for(int j=n; j>=i; j--) {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++) {
        for(int j=4; j>=i; j--) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    for(int i=1; i<=n; i++) {
        int k=1;
        for(int j=4; j>=i; j--) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d", p);
            p++;
        }
        printf("\n");
    }
    p=1;
    
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            if(p==1) {
                printf("%d", p);
                p=0;
            }
            else if(p==0) {
                printf("%d", p);
                p=1;
            }
        }
        printf("\n");
    }
    
    for(int i=1; i<=n; i++) {
        for(int j=n; j>=i; j--) {
            printf("* ");
        }
        printf("\n");
        for(int j=1; j<=i; j++) {
            printf(" ");
        }
    }

    for(int i=1; i<=n; i++) {
        for(int j=4; j>=i; j--) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            if(i%2==0) {
                printf("%c", k);
                k++;
            }
            else {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if(i==1 || i==n || j==1 || j==n) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}