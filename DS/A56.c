#include<stdio.h>
#include<stdlib.h>

struct node {
    int info;
    struct node *link;
};

struct node* first = NULL;

void insertAtLast(int x) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    struct node* save = first;

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

void display() {
    struct node* save = first;
    while(save!=NULL) {
        printf("%d ", save->info);
        save=save->link;
    }
    printf("\n");
    printf("\n");
}

int main() {

    while(1) {
        int n;
        printf("Enter the value : ");
        scanf("%d", &n);
        if(n!=-1) {
            insertAtLast(n);
        }
        else {
            break;
        }
    }
    display();

    int l;
    printf("Enter the values : ");
    scanf("%d", &l);
    insertAtLast(l);
    display();
    
    return 0;
}