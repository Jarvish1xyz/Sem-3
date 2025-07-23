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

void display() {
    for(int i=0; i<=top; i++) {
        printf("%c", Stack[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]!='*') {
            push(str[i]);
        }
        else {
            pop();
        }
    }

    display();
    printf("\n");

    return 0;
}