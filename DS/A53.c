#include<stdio.h>
#include<stdlib.h>
void main(){
   int n;
    printf("Enter number of integers you want to add: ");
    scanf("%d",&n);
    int sum=0;
    int *ptr=(int*)(calloc(n,sizeof(int)));
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(*(ptr+i)<*(ptr+j)){
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ,",*(ptr+i));
    }
}