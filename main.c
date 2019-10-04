#include "stdlib.h"
#include "stdio.h"

struct node
{
    int element;
    struct node *next;
};

struct node *push(struct node *head, int newElement)
{

    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->element = newElement;
    newNode->next = NULL;
    temp = head;

    if(head == NULL)
    {
        head = newNode;
    }

    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    return head;
}

void printList(struct node *head)
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->element);
        temp = temp->next;
    }
    printf("\n");
}


int main()
{
    struct node *head = NULL;
    head = push(head, 10);
    head = push(head, 15);

    printList(head);
    return 0;
}
