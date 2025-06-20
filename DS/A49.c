#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr1 = (int *)malloc(sizeof(int));
    char *ptr2 = (char *)malloc(sizeof(int));
    float *ptr3 = (float *)malloc(sizeof(int));
    
    if(ptr3&&ptr2&&ptr1==NULL) {
        printf("Mamory allocationn declined.");
    }
    else {
        printf("Mamory allocationn successfuly.");
    }
    
    free(ptr1);
    free(ptr2);
    free(ptr3);
    
}
