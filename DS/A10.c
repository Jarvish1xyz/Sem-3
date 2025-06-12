#include<stdio.h>
#include<math.h>

int revers(int a);

int main() {
    int n,ans=0;

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
                ans =(ans*10) + (n%10);
                n/=10;
            }
        break;
            
        case 2:
            printf("Enter n : ");
            scanf("%d", &n);

            ans = revers(n);
        break;
    }

    printf("ans = %d", ans);

    return 0;
}

int revers(int a) {
    int ans=a%10;
    if(a/10==0) {
        return a;
    }
    else {
        int k=a,c=0;
        while(k>0) {
            c++;
            k/10;
        }
        int x=ceil(pow(10,c));
        return (ans*x)+revers(a/10);
    }
}