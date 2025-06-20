#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
    printf("Enter length of array : ");
    scanf("%d", &n);
    
    int *ptr = (int *) calloc(n,sizeof(int));
    
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", ptr+i);
        sum+=*(ptr+i);
    }
    
    printf("Ans = %d", sum);
    
    return 0;
}
