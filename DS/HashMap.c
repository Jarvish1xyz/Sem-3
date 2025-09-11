#include<stdio.h>
#include<string.h>
#define n 10

struct map {
    char key[20];
    int value;
};

struct map Hash[n];


int find(char k[]) {
    int in=0;
    for(int i=0; k[i]!='\0'; i++) {
        in+=k[i];
        printf("%d  ", k[i]);
    }
    printf("%d\n", in);

    return in%n;
}

void insert(char k[], int v) {
    int index=find(k);
    int l=0;
    if(Hash[index].key[0]=='\0') {
        strcpy(Hash[index].key, k);
        Hash[index].value=v;
    }
    else if(!strcmp(Hash[index].key, k)) {
        Hash[index].value=v;
    }
    else {
        while(Hash[index+l].key[0]!='\0') l++;
        strcpy(Hash[((index+l)%n)].key, k);
        Hash[((index+l)%n)].value=v;
    }
    

}

int main() {
    char key[20];
    int value;
    while(1) {
        printf("Enter Key : ");
        scanf("%s", key);
        printf("Enter Value : ");
        scanf("%d", &value);

        if(value==-1 || !strcmp(key, "exit")) break;

        insert(key, value);
    }

    for(int i=0; i<n; i++) {
        printf("Key : %s, Value : %d\n", Hash[i].key, Hash[i].value);
    }


    return 0;
}