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

void deleteSpecific(struct node** head, int pos) {
    if (*head == NULL) {
        printf("List is Empty!!!\n");
        return;
    }

    struct node* save = *head;

    if (pos == 1) {
        *head = save->rptr;
        if (*head != NULL) {
            (*head)->lptr = NULL;
        }
        free(save);
        return;
    }

    for (int i = 1; save != NULL && i < pos; i++) {
        save = save->rptr;
    }

    if (save == NULL) {
        printf("Position out of bounds!!!\n");
        return;
    }

    if (save->lptr != NULL)
        save->lptr->rptr = save->rptr;
    if (save->rptr != NULL)
        save->rptr->lptr = save->lptr;

    free(save);
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

    int c, t;
    while (1)
    {
        printf("Enter a choice : \n");
        printf("1. Insert a node at the front of the linked list.\n");
        printf("2. Delete a node from specified position.\n");
        printf("3. Insert a node at the end of the linked list.\n");
        printf("4. Display all nodes.\n");
        printf(" -1 for Exit .\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            printf("Enter the values : ");
            scanf("%d", &t);
            insertFirst(&list, t);
            break;
        case 2:
            int pos;
            printf("Enter the position of node : ");
            scanf("%d", &pos);
            deleteSpecific(&list, pos);
            break;
        case 3:
            printf("Enter the values : ");
            scanf("%d", &t);
            insertEnd(&list, t);
            break;
        case 4:
            display(&list);
            break;
        default:
            break;
        }
        if (c == -1)
        {
            break;
        }

        display(&list);
    }

    return 0;
}