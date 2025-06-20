#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,max;
    printf("Enter length of array : ");
    scanf("%d", &n);
    
    int *ptr = (int *) calloc(n,sizeof(int));
    
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", ptr+i);
    }
    max=*ptr;
    
    for(int i=0; i<n; i++) {
        if(max<*(ptr+i)) {
            max=*(ptr+i);
        }
    }
    
    printf("Largest number = %d", max);
    
    return 0;
}
