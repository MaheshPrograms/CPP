#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string name_to_search;
string dob_to_search;
long int phone_to_search;

class Person
{
    public:
        string name;
        string DOB ;
        long int phone ;

    public :

        void get_data()
        {
            cout<<"Enter details : "<<endl;
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter DOB : ";
            cin>>DOB;
            cout<<"Enter phone : ";
            cin>>phone;
            cout<<"----------------------------------"<<endl;
        }

        void display_data()
        {
            cout<<name<<"   "<<DOB<<"  "<<phone<<endl;
        }
};

bool comp_by_name (Person p1, Person p2)
{
    return p1.name < p2.name ;
}

bool comp_by_DOB (Person p1, Person p2)
{
    return p1.DOB < p2.DOB ;
}

bool comp_by_phone (Person p1, Person p2)
{
    return p1.phone < p2.phone ;
}

bool find_by_name(Person p)
{
    return p.name == name_to_search;
}

bool find_by_DOB(Person p)
{
    return p.DOB == dob_to_search;
}

bool find_by_phone(Person p)
{
    return p.phone == phone_to_search ;
}

void display_menu()
{
    cout<<"--------MENU----------"<<endl;
    cout<<"1.Sort by name"<<endl;
    cout<<"2.Sort by DOB"<<endl;
    cout<<"3.Sort by phone"<<endl;
    cout<<"4.Search by name"<<endl;
    cout<<"5.Search by DOB"<<endl;
    cout<<"6.Search by phone"<<endl;
    cout<<"0.Exit"<<endl;
}

template <typename t>
void display_vector(vector<t>v)
{
    typename std::vector<t>::iterator it = v.begin();
    while (it != v.end())
    {
        it->display_data();
        it++;
    }
}


int main()
{
    int n;
    cout<<"Enter no of records to be stored : ";
    cin>>n;

    vector <Person> record ;
    for (int i = 0 ; i < n ; i++)
    {
        Person p;
        p.get_data();
        record.push_back(p);
    }

    bool flag = true ;

    while(flag)
    {
        display_menu();

        int code ;
        cout<<"Enter operation code : ";
        cin>>code;

        switch(code)
        {
            case 1 :
            {
                sort(record.begin(), record.end(), comp_by_name);
                display_vector(record);
                break;
            }

            case 2 :
            {
                sort(record.begin(), record.end(), comp_by_DOB);
                display_vector(record);
                break;
            }

            case 3 :
            {
                sort(record.begin(), record.end(), comp_by_phone);
                display_vector(record);
                break;
            }

            case 4 :
            {
                cout<<"Enter name to search for : ";
                cin>>name_to_search;
                vector <Person> :: iterator it = find_if(record.begin(), record.end(), find_by_name);
                cout<<"Record : "<<endl;
                cout<<it->name<<"  "<<it->DOB<<"  "<<it->phone<<endl;
                break;
                
            }

            case 5 :
            {
                cout<<"Enter DOB to search : ";
                cin>>dob_to_search;
                vector <Person> :: iterator it = find_if(record.begin(), record.end(), find_by_DOB);
                cout<<it->name<<"  "<<it->DOB<<"  "<<it->phone<<endl;
                break;
            }

            case 6 :
            {
                cout<<"Enter phone no to search for : "<<endl;
                cin>>phone_to_search;

                vector <Person> :: iterator it = find_if(record.begin(), record.end(), find_by_phone);
                cout<<it->name<<"  "<<it->DOB<<"  "<<it->phone<<endl;
                break;
            }

            case 0 :
            {
                flag = false ;
                cout<<"Thank you!"<<endl;
                break;
            }
        
            default :
            {
                cout<<"Invalid operation code"<<endl;
            }
        }
    }

    return 0;
}