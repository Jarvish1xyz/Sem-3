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
        struct node* save = *head;
        while(save->link!=NULL) {
            save=save->link;
        }
        save->link=newNode;
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

    struct node* queue = NULL;

    while(1) {
        int n;
        printf("Enter value : ");
        scanf("%d", &n);
        if(n==-1) {
            break;
        }
        else {
            insertNode(&queue, n);
        }
    }
    
    printList(&queue);

}