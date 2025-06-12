#include<stdio.h>

int fact(int a);

int main() {
    int n,ans=1;

    printf("Enter choice \n");
    printf("1. loop \n");
    printf("2. recursion \n");
    int ch;
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter n : ");
            scanf("%d", &n);
            
            while(n>0) {
                ans*=n;
                n--;
            }
        break;
            
        case 2:
            printf("Enter n : ");
            scanf("%d", &n);
            ans = fact(n);
        break;
    }
    
    printf("ans = %d", ans);
    
}

int fact(int a) {
    if(a==0 || a==1) {
        return a;
    }
    else {
        return a*fact(a-1);
    }
}