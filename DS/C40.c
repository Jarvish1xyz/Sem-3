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

void reverseStack() {
    char temp[size];
    int index = 0;
    while (top != -1) {
        temp[index++] = pop();
    }
    for (int i = 0; i < index; i++) {
        push(temp[i]);
    }
}

void cpyAns(char ans[][30], int t) {
    for (int i = 0; i <= top; i++) {
        ans[t][i] = Stack[i];
    }
    ans[t][top + 1] = '\0';
    top = -1;
}

int main() {
    int t;
    printf("Enter the number of test cases: ");
    scanf("%d", &t);
    char ans[t][30];

    int k=t;
    while(t--) {
        int len;
        printf("Enter the length of the string: ");
        scanf("%d", &len);
        char str[len + 1];
        printf("Enter the string: ");
        scanf("%s", str);

        for(int i=0; str[i]!='\0'; i++) {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') {
                reverseStack();
                push(str[i]);
            }
            else {
                push(str[i]);
            }
        }
        // reverseStack();

        cpyAns(ans, t);
    }
    printf("\n");
    k--;
    for(int i=k; i>=0; i--) {
        puts(ans[i]);
        printf("\n");
    }

    return 0;
}