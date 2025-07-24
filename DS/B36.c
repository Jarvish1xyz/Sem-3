#include<stdio.h>
#include<string.h>
#define size 30

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

    if(str[0] != 'a') {
        printf("The string is invalid\n");
        return 0;
    }
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]=='a') {
            push(str[i]);
        } 
        else if(str[i]=='b') {
            if(pop()!='a') {
                printf("The string is invalid\n");
                return 0;
            }
        }
        else {
            printf("The string is invalid\n");
            return 0;
        }
    }

    if(top==-1) {
        printf("The string is valid\n");
    } else {
        printf("The string is invalid\n");
    }

    return 0;
}