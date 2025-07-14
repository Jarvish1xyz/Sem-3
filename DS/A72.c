#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node* lptr;
    struct node* rptr;
};

struct node* createNode(int data) {
    struct node* newNode=(struct node*)malloc(sizeof(struct node));

    newNode->info=data;
    newNode->lptr=NULL;
    newNode->rptr=NULL;
    return newNode;
}

void insertNode(struct node** head, int data) {
    struct node* newNode=createNode(data);

    if(*head==NULL) {
        *head=newNode;
        return;
    }

    (*head)->lptr=newNode;
    newNode->rptr=*head;
    *head=newNode;
}

void display(struct node** head) {
    struct node *save = *head;
    while(save!=NULL) {
        printf("%d", save->info);
        save=save->rptr;
    }
    printf("\n");
    printf("\n");
}

int main() {
    struct node* list=NULL;

    while (1)
    {
        int n;
        printf("Enter value : ");
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        else
        {
            insertNode(&list, n);
        }
    }
    display(&list);

    return 0;
}