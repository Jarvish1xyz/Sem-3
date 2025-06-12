#include<stdio.h>

int main() {
    int m,n;
    int ans=0;

    printf("Enter m : ");
    scanf("%d", &m);
    printf("Enter n : ");
    scanf("%d", &n);

    while(m<=n) {
        ans+=m;
        m++;
    }
    

    printf("ans = %d", ans);

    return 0;
}