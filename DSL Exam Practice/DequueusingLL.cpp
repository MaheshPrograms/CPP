#include <iostream>
#include <string>
using namespace std ;

class node
{
    public : 
        int data ;
        node * next ;

    public : 
        node (int data)
        {
            this->data = data ;
            this->next = NULL ;
        }
};

class Linked_list
{
    node * head ;

    public : 
        Linked_list()
        {
            head = NULL ;
        }

        void append_node(int data)
        {
            node* nnptr = new node(data);
            if (head == NULL)
            {
                head = nnptr ;
            }
            else
            {
                node* nptr = head ;
                while (nptr->next != NULL)
                {
                    nptr = nptr -> next ;
                }
                nptr->next = nnptr ;
            }
        }

        void insert_at_front(int data)
        {
            node* nnptr  = new node(data);
            nnptr->next = head ;
            head = nnptr ;
        }

        void delete_last()
        {
            node* nptr = head ;
            if (nptr == NULL)
            {
                cout<<"Deletion not possible"<<endl;
            }
            else 
            {
                while (nptr->next->next != NULL)
                {
                    nptr = nptr -> next ;
                }
                node* temp = nptr->next ;
                nptr->next = NULL ;
                delete temp;
            }
        }

        void delete_first()
        {
            node* temp = head;
            head = head->next;
            delete temp ;
        }

        void display_LL()
        {
            node* nptr = head ;
            while (nptr != NULL)
            {
                cout<<nptr->data<<"  ";
            }
            cout<<endl;
        }
};

class stack
{
    node* top ;

    public : 
        stack()
        {
            top = NULL;
        }

        void push(int data)
        {
            node* nptr = new node(data);
            if (nptr == NULL)
            {
                cout<<"Stack overflow"<<endl;
            }
            else if (top == NULL)
            {
                top = nptr;
            }
            else 
            {
                nptr->next = top ;
                top = nptr ;
            }
        }

        void pop()
        {
            if (top == NULL)
            {
                cout<<"Stack underflow!"<<endl;
            }
            else 
            {
                node* temp = top ;
                top = top -> next ;
                delete temp ;
            }
        }

        void display()
        {
            node* nptr = top;
            while(nptr != NULL)
            {
                cout<<nptr->data<<endl;
                nptr = nptr->next;
            }
        }

        bool isFull()
        {
            node* temp = new node(0);
            if (temp == NULL)
            {
                return true ;
            }
            else
            {
                return false ;
            }
        }

        bool isEmpty()
        {
            if (top == NULL)
            {
                return true;
            }
            else
            {
                return false ;
            }
        }
};

class queue 
{
    node* front ;
    node* rear ;

    public : 
    queue()
    {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data)
    {
        node* nnptr = new node(data);
        if (nnptr == NULL)
        {
            cout<<"Queue is full"<<endl;
        }
        else if (front == NULL)
        {
            front = nnptr;
            rear = nnptr ;
        }
        else 
        {
            node* nptr = front ;
            while (nptr->next != NULL)
            {
                nptr = nptr->next;
            }
            nptr->next = nnptr ;
            rear = nnptr;
        }

    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout<<"Queue is empty";
        }
        else if (front == rear)
        {
            node* todelete = front;
            front = NULL;
            rear = NULL;
            delete todelete;
        }
        else 
        {
            front = front->next;
        }
    }

    void display()
    {
        node* nptr = front ;
        while(nptr != NULL)
        {
            cout<<nptr->data<<"  ";
            nptr = nptr -> next ;
        }
        cout<<endl;
    }

};

int main()
{

    return 0;

}