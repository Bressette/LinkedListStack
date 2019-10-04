#include "stdlib.h"
#include "stdio.h"

struct node
{
    int element;
    struct node *next;
};

struct node push(struct node *head, int newElement)
{
    struct node *newNode;

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

    size++;
    return head;
}



int main()
{
    struct node *head = NULL;
    push(head, 10);
    push(head, 15);


    return 0;
}
