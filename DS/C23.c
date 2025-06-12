#include<stdio.h>
#include<string.h>

int main() {
    int n;

    printf("Enter n : ");
    scanf("%d", &n);

    char name[n][100];
    scanf("%d");
    for(int i=0; i<n; i++) {
        gets(name[i]);
    }
    for(int i=0; i<n; i++) {
        char temp[1][100];
        for(int j=i+1; j<n; j++) {
            if(strcmp(name[i],name[j])>0) {
                strcpy(temp[0],name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp[0]);
            }
        }
    }

    printf("\nRearranged names\n\n");

    for(int i=0; i<n; i++) {
        puts(name[i]);
    }

    return 0;
}