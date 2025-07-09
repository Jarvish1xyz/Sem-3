#include<stdio.h>

int main() {
    int p,q;
    printf("Enter p : ");
    scanf("%d", &p);
    int a[p];
    for(int i=0; i<p; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", &a[i]);
    }
    
    printf("Enter q : ");
    scanf("%d", &q);
    int b[q];
    for(int i=0; i<q; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", &b[i]);
    }
    int s=p+q;
    int ans[s];
    for(int i=0; i<p; i++) {
        ans[i]=a[i];
    }
    for(int i=p; i<q; i++) {
        ans[i]=b[i];
    }

    for(int i=0; i<s; i++) {
        printf("%d ", ans[i]);
    }

    return 0;
}
