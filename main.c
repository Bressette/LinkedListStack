#include "stdlib.h"
#include "stdio.h"
#include "stdbool.h"

struct node
{
    int element;
    struct node *next;
};

struct node *top = NULL;

void push(int newElement)
{

    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->element = newElement;
    newNode->next = NULL;
    temp = top;

    if(top == NULL)
    {
        top = newNode;
    }

    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

}


void pop()
{
    struct node *temp = top;
    struct node *temp2 = top;

    while(temp->next != NULL)
    {
        temp2 = temp;
        temp = temp->next;
    }

    temp2->next = NULL;
    free(temp);
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

bool isEmpty()
{
    if(top == NULL)
    {
        return true;
    }
    else
        return false;
}

int returnTopElement()
{
    struct node *temp = top;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    return (temp->element);
}


int main()
{
    bool result;
    result = isEmpty();

    if(result == true)
        printf("Your stack is empty\n");
    else
        printf("Your stack is not empty\n");

    printf("Pushing elements\n");
    push(10);
    push(15);
    push(20);
    push(25);
    printList(top);
    printf("Popping elements\n");
    pop();
    pop();
    printList(top);
    int topElement;
    topElement = returnTopElement();
    printf("The value of the top element is %d", topElement);

    return 0;
}
