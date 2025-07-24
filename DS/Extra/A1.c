#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};

struct node* createNode(int data) {
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->info=data;
    newNode->link=NULL;
    return newNode;
}

void insertFirst(struct node** head, struct node** temp) {
    struct node* newNode = *temp;
    if(*head==NULL) {
        *head = newNode;
        return;
    }
    newNode->link=*head;
    *head = newNode;
}

void insertEnd(struct node** head, int data) {
    struct node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct node* save=*head;
    while(save->link!=NULL) {
        save=save->link;
    }
    save->link=newNode;
}

struct node* reverseK(struct node** head, int k) {

    if(*head==NULL) {
        printf("List is empty\n");
        return NULL;
    }
    struct node* ans=NULL;
    
    struct node* save=*head;
    int l=0;
    
    struct node* tempNext=NULL;
    while(save!=NULL) {
        
        
        int count=0;
        struct node* temp=save;
        for(int i=0; i<k; i++) {
            if(temp==NULL) {
                return;
            }
            insertFirst(&tempNext, &temp);
            temp=temp->link;
            save=save->link;
        }


        l++;
        save=save->link;

        if(l==1) {
            *head=tempNext;
        }
        while(tempNext!=NULL) {
            tempNext=tempNext->link;
        }
        tempNext->link=save;
    }
}

void display(struct node** head) {
    printf("\n");
    struct node* save=*head;
    while(save!=NULL) {
        printf("%d ", save->info);
        save=save->link;
    }
    printf("\n");
}

int main() {
    struct node* list=NULL;

    while(1) {
        int n;
        printf("Enter value : ");
        scanf("%d", &n);
        if(n==-1) break;
        else {
            insertEnd(&list, n);
        }
    }
    display(&list);

    reverseK(&list, 2);

    display(&list);


    return 0;
}