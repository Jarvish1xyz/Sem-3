#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    
    int *p=(int *) malloc(sizeof(int));
    
    for(int i=0; i<n; i++) {
        printf("Enter element-%d : ",i+1);
        scanf("%d", p+i);
    }
    for(int i=0; i<n; i++) {
        int temp=0;
        for(int j=0; j<n; j++) {
            if(*(p+i)<*(p+j)) {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        printf("%d ", *(p+i));
    }
    
    return 0;
}
