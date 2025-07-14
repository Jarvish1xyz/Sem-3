#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = data;
    newNode->link = NULL;
    return newNode;
}

void insertEnd(struct node **head, int data)
{
    struct node *newNode = createNode(data);

    if (*head == NULL)
    {
        *head = newNode;
        newNode->link = newNode;
        return;
    }

    struct node *last = *head;
    while (last->link != *head)
    {
        last = last->link;
    }

    last->link = newNode;
    newNode->link = *head;
}

struct node* splitList(struct node** head, int len) {
    len = (len+1)/2;

    struct node* first =*head;
    len--;
    while(len--) {
        first=first->link;
    }

    struct node* sec=first->link;
    while(sec->link!=*head) {
        sec=sec->link;
    }
    sec->link=first->link;
    sec=sec->link;
    first->link=*head;
    return sec;
}

void display(struct node **head)
{
    struct node *save = *head;
    do
    {
        printf("%d ", save->info);
        save = save->link;
    } while (save != *head);
    printf("\n");
    printf("\n");
}

int main()
{
    struct node *list = NULL;
    int len=0;

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
            len++;
            insertEnd(&list, n);
        }
    }
    display(&list);
    
    struct node *list2=splitList(&list, len);
    
    display(&list);
    display(&list2);
    
    return 0;
}