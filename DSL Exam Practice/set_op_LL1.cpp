#include <iostream>
#include <string>
using namespace std ;

class node 
{
    public :
    int data ;
    node * next ;

    public:
    node(int data)
    {
        this->data = data ;
        this->next = NULL ;
    }
};

class Linked_list
{
    private : 
        node * head ;

    public : 
        Linked_list()
        {
            head = NULL;
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
                node * nptr = head ;
                while (nptr->next != NULL)
                {
                    nptr = nptr->next;
                }
                nptr->next = nnptr ;
            }
        }

        void display_LL()
        {
            node * nptr = head ;
            while (nptr != NULL)
            {
                cout<<nptr->data<<"  ";
                nptr = nptr->next;
            }
            cout<<endl;
        }

        friend class SE_comp ;
};

class SE_comp
{
    private : 
        Linked_list cls ;
        Linked_list Venilla ;
        Linked_list ButterScotch ;
        int cls_strength ;
        int V_count ;
        int B_count ;

    public  :
        void get_data()
        {
            cout<<"Enter the total no of students in class"<<endl;
            cin>>cls_strength;
            for (int i = 1 ; i <= cls_strength ; i++ )
            {
                cls.append_node(i);
            }

            cout<<"Enter no of students who like venilla : "<<endl;
            cin>>V_count;
            cout<<"Enter roll nos of those students : "<<endl;
            for (int i = 0 ; i < V_count ; i++)
            {
                int roll;
                cin>>roll;
                Venilla.append_node(roll);
            }

            cout<<"Enter no of students who like ButterScotch"<<endl;
            cin>>B_count;
            cout<<"Enter roll nos of those students : "<<endl;
            for (int i = 0 ; i < B_count ; i++)
            {
                int roll ;
                cin>>roll;
                ButterScotch.append_node(roll);
            }

        }

        Linked_list Venilla_and_ButterScotch()
        {
            Linked_list both ;
            node* V_ptr = Venilla.head ;
            while (V_ptr != NULL)
            {
                node* B_ptr = ButterScotch.head ;
                while (B_ptr != NULL)
                {
                    if (V_ptr->data == B_ptr->data)
                    {
                        both.append_node(V_ptr->data);
                    }
                    B_ptr = B_ptr -> next ;
                }
                V_ptr = V_ptr -> next ;
            }
            return both ;
        }

        Linked_list V_or_B_not_both()
        {
            Linked_list both = Venilla_and_ButterScotch();
            Linked_list sym_diff ;
            
            node* V_ptr = Venilla.head ;
            while (V_ptr != NULL)
            {
                node * both_ptr = both.head;
                bool flag = true ;
                while (both_ptr != NULL)
                {
                    if (both_ptr->data == V_ptr->data)
                    {
                        flag = false ;
                        break;
                    }
                    both_ptr = both_ptr -> next ;
                }
                
                if (flag == true)
                {
                    sym_diff.append_node(V_ptr->data);
                }
                V_ptr = V_ptr -> next ;
            }
            
            node* B_ptr = ButterScotch.head ;
            while (B_ptr != NULL)
            {
                node* both_ptr = both.head ;
                bool flag = true ;
                while (both_ptr != NULL)
                {
                    if (both_ptr->data == B_ptr->data)
                    {
                        flag = false ;
                        break;
                    }
                    both_ptr = both_ptr->next;
                }

                if (flag == true)
                {
                    sym_diff.append_node(B_ptr->data);
                }

                B_ptr = B_ptr -> next ;
                
            }
        
            return sym_diff;
        }

        Linked_list neither_V_not_B()
        {
            Linked_list neither ;
            node* cls_ptr = cls.head ;

            while (cls_ptr != NULL)
            {
                bool flag = true ;

                node* V_ptr = Venilla.head ;
                while(V_ptr != NULL)
                {
                    if (V_ptr->data == cls_ptr->data)
                    {
                        flag = false ;
                        break;
                    }
                    V_ptr = V_ptr -> next;
                }

                node* B_ptr = ButterScotch.head ;
                while(B_ptr != NULL)
                {
                    if (cls_ptr->data == B_ptr -> data)
                    {
                        flag = false ;
                        break;
                    }
                    B_ptr = B_ptr -> next ;
                }
            
                if (flag == true)
                {
                    neither.append_node(cls_ptr->data);
                }

                cls_ptr = cls_ptr -> next ;
            }

            return neither;
        }
};

void display_menu()
{
    cout<<"--------Menu-------"<<endl;
    cout<<"1.Venilla and Butterscotch"<<endl;
    cout<<"2.Venilla or Butterscotch not both"<<endl;
    cout<<"3.Neither Venilla nor butterscotch"<<endl;
    cout<<"0.Exit"<<endl;
}

int main()
{
    SE_comp SE02;
    SE02.get_data();

    bool flag = true ;
    while(flag)
    {
        display_menu();
        int code ;
        cout<<"Enter operation code"<<endl;
        cin>>code;

        switch(code)
        {
            case 1:
            {
                Linked_list both = SE02.Venilla_and_ButterScotch();
                both.display_LL();
                break;
            }

            case 2 :
            {
                Linked_list sym_diff = SE02.V_or_B_not_both();
                sym_diff.display_LL();
                break;
            }

            case 3 :
            {
                Linked_list neither = SE02.neither_V_not_B();
                neither.display_LL();
                break;
            }

            case 0 :
            {
                flag = false ;
                break;
            }

            default:
            {
                cout<<"Invalid code"<<endl;
            }
        }
    }
    
    return 0;
}

