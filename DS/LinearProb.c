#include<stdio.h>
#define n 10

int Hash[n];

int main() {

    int k;
    while(1) {
        int l=0;
        printf("Enter value : ");
        scanf("%d", &k);
        if(k==-1) break;

        while(Hash[(k%n)+l]!=0) l++;
        Hash[((k%n)+l)%n]=k;
    }

    for(int i=0; i<n; i++) {
        printf("%d ",Hash[i]);
    }

    return 0;
}