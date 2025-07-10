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

void insertFirst(struct node **head, int data)
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
    newNode->link = *head;
    *head = newNode;
    last->link = *head;
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

void deleteSpecific(struct node **head, int pos)
{
    if (*head == NULL)
    {
        printf("\nList is Empty!!!\n");
        return;
    }

    struct node *temp = *head;

    if (pos == 1)
    {
        if (temp->link == temp)
        {
            free(temp);
            *head = NULL;
            return;
        }

        struct node *last = *head;
        while (last->link != *head)
        {
            last = last->link;
        }

        last->link = temp->link;
        *head = temp->link;
        free(temp);
        return;
    }
    pos -= 2;
    while (pos-- && temp->link != *head)
    {
        temp = temp->link;
    }

    if (pos > 0)
    {
        printf("Position out of rsnge");
        return;
    }
    else
    {
        struct node *del = temp->link; // node to be deleted
        temp->link = del->link;
        free(del);
    }
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