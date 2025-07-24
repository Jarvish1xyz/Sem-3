#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node* lptr;
    struct node* rptr;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = data;
    newNode->lptr = NULL;
    newNode->rptr = NULL;
    return newNode;
}

void insertNode(struct node** head, int data) {
    struct node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct node* current = *head;
    struct node* parent = NULL;
    while (current != NULL) {
        parent = current;
        if (data < current->info) {
            current = current->lptr;
        } else {
            current = current->rptr;
        }
    }
    if (data < parent->info) {
        parent->lptr = newNode;
    } else {
        parent->rptr = newNode;
    }
}

int main() {
    struct node* root = NULL;
    while(1) {
        int data;
        printf("Enter a number to insert into the binary search tree (or -1 to exit): ");
        scanf("%d", &data);
        if (data == -1) {
            break;
        }
        insertNode(&root, data);
    }

    return 0;
}