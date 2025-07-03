#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node*));

    if(newNode==NULL) {
        return NULL;
    }

    newNode->info=data;
    newNode->link=NULL;
    return newNode;
}

void insertNode(struct node** head, int data) {
    struct node* newNode=createNode(data);

    if(*head==NULL) {
        *head=newNode;
    }
    else {
        newNode->link=*head;
        *head=newNode;
    }
}

void printList(struct node** list) {
    struct node* save = *list;
    while(save!=NULL) {
        printf("%d ", save->info);
        save=save->link;
    }
}

int main() {

    struct node* stack = NULL;

    while(1) {
        int n;
        printf("Enter value : ");
        scanf("%d", &n);
        if(n==-1) {
            break;
        }
        else {
            insertNode(&stack, n);
        }
    }
    
    printList(&stack);

}