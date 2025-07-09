#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

void sortString(char *a);
int anagram(char *a,char *b);


int main() {
    int n;
    printf("Enter n : ");
    scanf("%d", &n);

    char a[n][100];
    printf("Enter words : \n");
    scanf("\n");
    for(int i=0; i<n; i++) {
        gets(a[i]);
    }

    srand(time(0));
    int rndm = (rand()%n);
    
    char b[100];
    printf("Enter anagram word : ");
    gets(b);

    anagram(a[rndm],b);
    printf("sefsd");
}

int anagram(char *a,char *b) {
    if(strlen(a)!=strlen(b)) {
        return 0;
    }

    int x[strlen(a)],y[strlen(b)];
    
    for(int i=0; i<strlen(a); i++) {
        x[i]=(int)a;
        y[i]=(int)b;
    }

    
    

}