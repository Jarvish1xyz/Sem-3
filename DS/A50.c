#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    
    int *ptr = (int *) calloc(n,sizeof(int));
    
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", ptr+i);
    }
    
    for(int i=0; i<n; i++) {
        printf("%d ", *(ptr+i));
    }
    
    return 0;
}
