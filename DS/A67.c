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

int findGCD(int a, int b) {
    if(b==0) {
        return a;
    }
    return findGCD(b, a % b);
}

void GCDList(struct node** head) {
    struct node* save = *head;
    while(save!=NULL && save->link!=NULL) {
        int gcd=findGCD(save->info, (save->link)->info);
        struct node* newNode=createNode(gcd);
        newNode->link=save->link;
        save->link=newNode;
        save=newNode->link;
    }
}

void printList(struct node** list) {
    struct node* save = *list;
    while(save!=NULL) {
        printf("%d ", save->info);
        save=save->link;
    }
    printf("\n");
}

int main() {

    struct node* list = NULL;

    while(1) {
        int n;
        printf("Enter value : ");
        scanf("%d", &n);
        if(n==-1) {
            break;
        }
        else {
            insertNode(&list, n);
        }
    }
    printf("\nOriginal List: ");
    printList(&list);

    printf("\nGCD List: \n");
    GCDList(&list);
    printList(&list);

    return 0;
}