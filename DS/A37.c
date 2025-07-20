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

int findMatching(char c) {
    if (c == ')') return '(';
    if (c == '}') return '{';
    if (c == ']') return '[';
    return '\0'; // Invalid character
}

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    int ans[t],k=-1;

    while(t--) {
        char str[100];
        printf("Enter parenthesis string: ");
        scanf("%s", str);

        if(strlen(str)%2!=0) {
            ans[++k] = 0;
            continue;
        }
        
        int valid=0;
        for(int i=0; str[i]!='\0'; i++) {
            if(str[i] == '(' || str[i] == '{' || str[i] == '[') {
                push(str[i]);
                valid++;
            }
            else if(str[i] == ')' || str[i] == '}' || str[i] == ']') {
                if(pop()==findMatching(str[i])) {
                    valid--;
                } else {
                    top=-1;
                    break;
                }
            }
        }

        if(valid == 0 && top == -1) {
            ans[++k] = 1;
        } 
        else {
            ans[++k] = 0;
        }
    }
    for(int i=0; i<=k; i++) {
        printf("%d\n", ans[i]);
    }

    return 0;
}