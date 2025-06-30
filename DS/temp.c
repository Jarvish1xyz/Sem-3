#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};


void insertAtLast(struct node* list, int x) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* save = list;

    if(first==NULL) {
        first=newnode;
    }
    else {
        while(save->link!=NULL) {
            save=save->link;
        }
        save->link=newnode;
    }
    newnode->info=x;
    newnode->link=NULL;
}

struct node* checkIntersection(struct node* list1,struct node* list2) {
    struct node* ans=NULL;
    struct node* l1=list1;
    while(l1->linke!=NULL) {
        struct node* l2=list2;
        while(l2->link!=NULL) {
            if(l1->info==l2->info) {
                ans->info=l1->info;
                ans=ans->link;
            }
            l2=l2->link;
        }
        list2=(list2->link);
    }
}

int main() {

    struct node* list1=NULL;
    struct node* list2=NULL;
    
    printf("Enter first node : \n");
    while(1) {
        int n;
        printf("Enter the value : ");
        scanf("%d", &n);
        if(n!=-1) {
            insertAtLast(list1,n);
        }
        else {
            break;
        }
    }

    printf("Enter second node : \n");
    while(1) {
        int n;
        printf("Enter the value : ");
        scanf("%d", &n);
        if(n!=-1) {
            insertAtLast(list2,n);
        }
        else {
            break;
        }
    }

    checkLoop(first);
}