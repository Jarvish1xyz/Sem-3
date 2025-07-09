#include<stdio.h>

int main() {
    int row1=3,col1=2;
    int row2=2,col2=3;

    int a[row1][col1], b[row2][col2], ans[row1][col2];

    printf("Enter matrix-1 : \n");
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter matrix-2 : \n");
    for(int i=0; i<row2; i++) {
        for(int j=0; j<col2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            ans[i][j]=0;
            for(int k=0; k<col1; k++) {
                ans[i][j]+=a[i][k]*b[k][j];
            }
        }
    }

    printf("Ans matrix : \n");
    for(int i=0; i<row1; i++) {
        for(int j=0; j<col2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}