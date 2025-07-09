#include<stdio.h>

int main() {
    int col=2,row=2;

    int a[row][col],b[row][col],ans[row][col];

    printf("Enter matrix-1 : \n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix-2 : \n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            ans[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("Ans matrix : \n");
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}