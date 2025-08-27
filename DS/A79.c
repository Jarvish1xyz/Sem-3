#include <stdio.h>
#include <stdlib.h>

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
    return *root;
}


int findIndex(int* arr, int value, int start, int end) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == value) {
            return i;
        }
    }
    return -1;
}



void makeBTree(struct node** root, int* pre, int* post,int s, int n) {
    if(*root==NULL) {
        insertNode(root, pre[0]);
    }
    int index = findIndex(post, (pre+1)[0], 0, n);
    if(index==-1) {
        return;
    }
    
    makeBTree(&((*root)->lptr), pre++, post, s, index);
    makeBTree(&((*root)->rptr), pre + 1, post, s, n - 1);
}


void inorder(struct node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->lptr);
    printf("%d ", root->info);
    inorder(root->rptr);

}





int main() {

    struct node* btree = NULL;



    int n;
    printf("Enter a length of preorder : ");
    scanf("%d", &n);

    int pre[n], post[n];

    printf("Enter the preorder traversal: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &pre[i]);
    }

    printf("Enter the posttorder traversal: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &post[i]);
    }


    makeBTree(&btree, pre, post, 0, n-1);

    printf("Inorder traversal of the constructed binary tree: ");
    inorder(btree);
    printf("\n");

    return 0;
}