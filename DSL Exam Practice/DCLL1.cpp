#include <iostream>
#include <string>
using namespace std;

class node
{
    public :
        int data ;
        node* next ;
        node* prev ;

    public :
        node(int data)
        {
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
};

class Doubly_circular_LL
{
    private :
        node * head ;

    public:
        Doubly_circular_LL()
        {
            head = NULL;
        }

        void append_node(int data)
        {
            node* nnptr = new node(data);
            
            if (head == NULL)
            {
                head = nnptr ;
                nnptr->next = nnptr ;
                nnptr->prev = nnptr ;
            }
            
            else
            {
                node * nptr = head ;
                while (nptr->next != head)
                {
                    nptr = nptr -> next ;
                }
                nptr->next = nnptr ;
                nnptr->prev = nptr ;
                nnptr->next = head ;
                head->prev = nnptr ;
            }
        }

        void display_LL()
        {
            node * nptr = head ;
            while (nptr->next != head )
            {
                cout<<nptr->data<<"  "<<endl;
                nptr = nptr->next;
            }
            cout<<nptr->data<<endl;
        }

    friend class Ticket_booking_system ;
};

class Ticket_booking_system
{
    private : 
        node* heads[10];

    public : 
        Ticket_booking_system()
        {
            for(int i = 0 ; i < 10; i++)
            {
                Doubly_circular_LL LL;
                
                for(int j = 0 ; j < 7 ; j++)
                {
                    LL.append_node(0);
                }

                heads[i] = LL.head;
            }
        }

        void book_seats()
        {
            int no_of_seats;
            cout<<"Enter no of seats you want to book"<<endl;
            cin>>no_of_seats;
            
            for(int i = 0 ; i < no_of_seats ; i++)
            {
                int row, column ;
                cout<<"Enter row and column of seat to be booked"<<endl;
                cin>>row>>column;

                node* head = heads[row-1];
                node* nptr = head ;
                int count = 1 ;
                while(count != column)
                {
                    nptr = nptr->next;
                    count++;
                }
                
                if(nptr->data == 1)
                {
                    cout<<"Seat is already booked"<<endl;
                }
                else
                {
                    nptr->data = 1;
                    cout<<"Seat booked successfully"<<endl;
                }
            }

        }

        void cancel_booking()
        {
            int seats_to_cancel;
            cout<<"Enter no of booked seats you want to cancel"<<endl;
            cin>>seats_to_cancel;

            for(int i = 0 ; i < seats_to_cancel ; i++)
            {
                int row,column;
                cout<<"Enter row and column to seat to be cancelled"<<endl;
                cin>>row>>column;

                node* head = heads[row-1];
                node* nptr = head ;
                int count = 1 ;
                while(count != column)
                {
                    nptr = nptr -> next;
                    count++;
                }

                if (nptr->data == 0)
                {
                    cout<<"Seat not booked"<<endl;
                }
               
                else
                {
                    nptr->data = 0 ;
                    cout<<"Booking cancelled successfully"<<endl;
                }
            }

        }

        void display_booking_status()
        {
            for(int i = 0 ; i < 10 ; i++)
            {
                node* nptr = heads[i];
                while (nptr->next != heads[i])
                {
                    cout<<nptr->data<<"  ";
                    nptr = nptr->next;
                }
                cout<<nptr->data<<endl;
            }
        }
};

void display_menu()
{
    cout<<"--------MENU--------"<<endl;
    cout<<"1.Book Seats"<<endl;
    cout<<"2.Cancel booking"<<endl;
    cout<<"3.Display booking status"<<endl;
    cout<<"0.Exit"<<endl;
}

int main()
{
    Ticket_booking_system sys ;
    bool flag = true ;
    while (flag)
    {
        display_menu();
        int code ;
        cout<<"Enter choice code"<<endl;
        cin>>code;

        switch(code)
        {
            case 1 :
            {
                sys.book_seats();
                break;
            }

            case 2 : 
            {
                sys.cancel_booking();
                break;
            }

            case 3 : 
            {
                sys.display_booking_status();
                break;
            }

            case 0 : 
            {
                flag = false;
                cout<<"Thank you!"<<endl;
                break;
            }

            default:
            {
                cout<<"Invalid operation code"<<endl;
            }
        }
    }

    return 0;
}





