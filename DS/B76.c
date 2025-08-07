#include<stdio.h>
#include<stdlib.h>
#define size 30

int Stack1[size];
int Stack2[size];
int top1=-1, top2=-1;

void push1(int data) {
    Stack1[++top1]=data;
}
void push2(int data) {
    Stack2[++top2]=data;
}

struct node{
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

struct node* insertNode(struct node** root, int data) {
    if (*root == NULL) {
        *root = createNode(data);
        return *root;
    }
    if (data < (*root)->info) {
        (*root)->lptr = insertNode(&((*root)->lptr), data);
    } else if (data > (*root)->info) {
        (*root)->rptr = insertNode(&((*root)->rptr), data);
    }
    return *root;
}

void preorder(struct node** root,int l) {
    if (*root == NULL) {
        if(l) {
            push1(-1);
        }
        else {
            push2(-1);
        }
        return;
    }
    if(l) {
        push1((*root)->info);
    }
    else {
        push2((*root)->info);
    }
    preorder(&(*root)->lptr, l);
    preorder(&(*root)->rptr, l);
}

int checkStakes() {
    while(top1!=-1 || top2!=-1) {
        if(Stack1[top1--]!=Stack2[top2--]) {
            return 0;
        }
    }
    if(top1) return 0;
    if(top2) return 0;

    return 1;
}


int main() {

    struct node* bst1 = NULL;
    struct node* bst2 = NULL;

    int n;
    printf("\nInserrt First tree : \n");
    while(1) {
        printf("Enter data : ");
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        else {
            insertNode(&bst1, n);
        }
    }
    preorder(&bst1, 1);
    printf("\nInserrt Second tree : \n");
    while(1) {
        printf("Enter data : ");
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        else {
            insertNode(&bst2, n);
        }
    }
    preorder(&bst2, 0);

    if(checkStakes()) {
        printf("Both Tree are same.");
    }
    else {
        printf("Both Tree are not same.");
    }
    
    return 0;
}