#include<stdio.h>

int power(int x, int y);

int main() {
    int p,b,ans=1;

    printf("Enter choice \n");
    printf("1. loop \n");
    printf("2. recursion \n");
    int ch;
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Enter base : ");
            scanf("%d", &b);
            printf("Enter power : ");
            scanf("%d", &p);
            
            while(p>0) {
                ans*=b;
                p--;
            }
        break;
            
        case 2:
            printf("Enter base : ");
            scanf("%d", &b);
            printf("Enter power : ");
            scanf("%d", &p);

            ans = power(b,p);
        break;
    }

    printf("ans = %d", ans);

    return 0;
}

int power(int x, int y) {
    if(y==0) {
        return 1;
    }
    else if(y==1) {
        return x;
    }
    else {
        return x*power(x,(y-1));
    }
}