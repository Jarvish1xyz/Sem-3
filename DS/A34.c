#include <stdio.h>
#define size 5
int Stack[size];
int top=-1;


void push(int n) {
    if (top >= size - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        Stack[top] = n;
    }
}

int pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return -1;
    } else {
        return Stack[top--];
    }
}

int peep(int pos) {
    if (top - pos + 1 < 0 || pos < 1) {
        printf("Invalid position\n");
        return -1;
    } else {
        return Stack[top - pos + 1];
    }
}

void change(int pos, int n) {
    if (top - pos + 1 < 0 || pos < 1) {
        printf("Invalid position\n");
    } else {
        Stack[top - pos + 1] = n;
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int c, t, pos;
    while (1)
    {
        printf("Enter a choice : \n");
        printf("1. Push a value.\n");
        printf("2. Pop a value.\n");
        printf("3. Peek at position.\n");
        printf("4. Change value at Position.\n");
        scanf("%d", &c);

        switch (c) {
            case 1:
                printf("Enter the values : ");
                scanf("%d", &t);
                push(t);
            break;
            case 2:
                t = pop();
                printf("\nPopped value is %d\n", t);
            break;
            case 3:
                printf("Enter the position from top : ");
                scanf("%d", &pos);
                t = peep(pos);
                printf("\nValue at position %d is %d\n", pos, t);
            break;
            case 4:
                printf("Enter the position from top : ");
                scanf("%d", &pos);
                printf("Enter the new value : ");
                scanf("%d", &t);
                change(pos, t);
            break;
            case 5:
                display();
            break;
            default:
                printf("Invalid choice\n");
            break;
        }
        if (c == -1) {
            break;
        }
    }

    return 0;
}