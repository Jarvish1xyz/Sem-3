#include<stdio.h>

int main() {
    int n,ans=0;

    printf("Enter n : ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        int p=0;
        for(int j=1; j<=i; j++) {
            p+=j;
        }
        ans+=p;
    }

    printf("ans = %d", ans);

    return 0;
}