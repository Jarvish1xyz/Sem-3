#include<stdio.h>
#include<string.h>
#define size 100

char Stack[size];
int top=-1;

void push(char c) {
    if (top >= size - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        Stack[top] = c;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return Stack[top--];
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int check=0,ans=0;
    for(int i=0; str[i]!='\0'; i++) {
        if(check==0 && str[i]!='c') {
            push(str[i]);
        }
        else if(str[i]=='c') {
            check = 1;
            continue;
        }

        if(check) {
            if(pop() == str[i]) {
                ans++;
            } 
        }
    }

    if(strlen(str)==(ans*2)+1) {
        printf("The string is valid\n");
    } else {
        printf("The string is invalid\n");
    }

    return 0;
}