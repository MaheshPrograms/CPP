#include <iostream>
using namespace std;

class node
{
    public : 
    int data;
    node* next ;

    public:
        node(int data)
        {
            this->data = data ;
            this->next = NULL ;
        }
};

class stack
{
    node* top ;

    public:
        stack()
        {
            top = NULL;
        }

        void push(int data)
        {
            node* nnptr = new node(data);
            
            if (nnptr == NULL)
            {
                cout<<"Stack overflow";
            }
            else if (top == NULL)
            {
                top = nnptr ;
            }
            else 
            {
                nnptr->next = top;
                top = nnptr;
            }
        }

        void pop()
        {
            if (top == NULL)
            {
                cout<<"Stack underflow"<<endl;
            }
            else
            {
                node* temp = top ;
                top = top -> next ;
                delete temp;
            }
        }

        void display()
        {
            node* nptr = top ;
            while(nptr != NULL)
            {
                cout<<nptr->data<<endl;
                nptr = nptr -> next ;
            }
        }

        int getTop()
        {
            return top->data;
        }

};

class queue
{
    node* front ;
    node* rear ;

    public : 
        queue()
        {
            front = NULL ;
            rear = NULL ; 
        }

        void enqueue(int data)
        {
            node* nnptr = new node(data);
            if (nnptr = NULL)
            {
                cout<<"Queue is full"<<endl;
            }
            else if (front == NULL)
            {
                front = nnptr ;
                rear = nnptr ;
            }
            else 
            {
                rear -> next = nnptr ;
                rear = nnptr ;
            }
        }

        void dequeue()
        {
            if (front == NULL)
            {
                cout<<"Queue is full"<<endl;
            }
            else if (front == rear)
            {
                node* temp = rear ;
                front = NULL ; 
                rear = NULL ;
                delete temp ;
            }
            else
            {
                node* temp = front ;
                front = front -> next ;
                delete temp ;
            }
        }

        void display()
        {
            node* nptr = front ; 
            while (nptr != NULL)
            {
                cout<<nptr->data<<"  ";
                nptr = nptr -> next;
            }
            cout<<endl;
        }

};


int main()
{


    return 0 ;
}