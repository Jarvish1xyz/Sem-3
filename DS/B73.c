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

void insertFirst(struct node** head, int data) {
    struct node* newNode=createNode(data);

    if(*head==NULL) {
        *head=newNode;
        return;
    }

    (*head)->lptr=newNode;
    newNode->rptr=*head;
    *head=newNode;
}

void insertEnd(struct node** head, int data) {
    struct node* newNode=createNode(data);

    if(*head==NULL) {
        *head=newNode;
        return;
    }

    struct node* save=*head;
    while(save->rptr!=NULL) {
        save=save->rptr;
    }
    save->rptr=newNode;
    newNode->lptr=save;
}

void deleteAlternate(struct node** head) {
    if(*head==NULL) {
        printf("List is Empty!!!");
        return;
    }

    struct node* save=*head;
    while(save!=NULL && save->rptr!=NULL) {
        struct node* del=save->rptr;
        ((save->rptr)->rptr)->lptr=save;
        save->rptr=(save->rptr)->rptr;
        free(del);
        save=save->rptr;
    }
}

void display(struct node** head) {
    struct node *save = *head;
    while(save!=NULL) {
        printf("%d ", save->info);
        save=save->rptr;
    }
    printf("\n");
    printf("\n");
}

int main() {
    struct node *list = NULL;

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
            insertEnd(&list, n);
        }
    }
    display(&list);
    
    deleteAlternate(&list);
    
    display(&list);

    return 0;
}