#include <stdio.h>
#define size 20

int queue[size];
int front = -1, rear = -1;

void enqueue(int val) {
    if (rear == size - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) front = 0;
    queue[++rear] = val;
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
        return;
    }
    printf("%d dequeued\n", queue[front++]);
    if (front > rear) front = rear = -1;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {
    int choice, val;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(val);
            break;
            case 2:
                dequeue();
            break;
            case 3:
                display();
            break;
        }
        if(choice==-1) break;
    }

    return 0;
}