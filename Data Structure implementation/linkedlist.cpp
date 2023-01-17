#include <iostream>
using namespace std;

class linked_list
{
    struct node
    {
        int data ;
        node * next ;
    };
    node * head ;

    public:
    linked_list()
    {
        head = NULL;
    }

    void append_node(int data)
    {
        node * nnptr = new node ;
        nnptr->data = data ;
        nnptr->next = NULL ;

        if (head==NULL)
        {
            head = nnptr ;
        }
        else 
        {
            node * nptr ;
            nptr = head ;
            while (nptr->next!=NULL)
            {
                nptr = nptr->next ;
            }
            nptr->next = nnptr;
        }
    }

    void insert_at_start(int data)
    {
        node * nnptr = new node ;
        nnptr->data = data;
        nnptr->next = NULL;

        nnptr->next = head ;
        head = nnptr ;
    }

    void insert_at(int data, int pos)
    {
        node * nnptr = new node;
        nnptr->data = data;
        nnptr->next = head;

        int count = 1;
        node * nptr = head ;
        while (count!=pos-1)
        {
            count++;
        }
        nnptr->next = nptr->next;
        nptr->next = nnptr;
    }

    void delete_last()
    {
        node* nptr = head;
        while(nptr->next->next!=NULL)
        {
            nptr=nptr->next;
        }
        nptr->next = NULL;
    }

    void del_at_pos(int pos)
    {
        node * nptr = head;
        int count=1;
        while (count!=pos-1)
        {
            nptr = nptr->next;
        }
        nptr->next=nptr->next->next;
    }

    void display()
    {
        node * nptr = head;
        while (nptr!=NULL)
        {
            cout<<nptr->data<<" @ "<<nptr<<endl;
        }
        
    }

};

int main()
{


    return 0 ;
}