#include<stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next ; 
};

struct node* rear = NULL ; 
struct node* front = NULL ; 

void enqueue(int data)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = data ; 
    new->next = NULL ; 

    if(front == NULL)
    {
        front = new ; 
        rear = new ; 
    }
    else 
    {
        rear->next = new ; 
        rear = new ; 
    }
}

void dequeue()
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
    }
    else if (front == rear)
    {
        struct node* temp = rear ; 
        front = NULL ; 
        rear = NULL ; 
        free(temp) ; 
    }
    else 
    {
        struct node* temp = front ; 
        front = front ->next  ; 
        free (temp);
    }
}

void display()
{
    struct node* nptr = front ; 
    while (nptr != NULL)
    {
        printf("%d   ", nptr->data);
        nptr = nptr -> next ; 
    }
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(11);
    enqueue(1);
    enqueue(8);
    enqueue(89);
    dequeue();
    dequeue();
    dequeue();
    display();
    return 0 ; 
    
}