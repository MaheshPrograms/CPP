#include <iostream>
#include <string>
using namespace std ;

class Publication 
{
    protected :
        string title ;
        float price  ;

    public :
        Publication()
        {
            title = "" ;
            price = 0.0 ;
        }

        void get_details()
        {
            cout<<"Enter title : ";
            cin>>title ;
            cout<<"Enter price : ";
            cin>>price ;
        }

        void display_details()
        {
            cout<<"Title : "<<title<<endl;
            cout<<"Price : "<<price<<endl;
        }

        ~Publication()
        {
            cout<<"Destructor for publication called "<<endl;
        }

};

class Book : protected Publication 
{
    protected : 
        int pages ;

    public :
        Book()
        {
            pages = 0 ;
        }

        void get_details()
        {
            try
            {
                cout<<"Enter book details : "<<endl;
                Publication::get_details();
                if (price < 0 ) 
                {
                    string e = "Invalid value entered";
                    throw e;
                }

                cout<<"Enter no of Pages : ";
                cin>>pages;
                if (pages < 0 ) 
                {
                    string e = "Invalid value entered";
                    throw e;
                }
            }
            catch (string e)
            {
                price =  0 ;
                pages = 0 ; 
                cout<<e<<endl;
            }

        }

        void display_details()
        {
            cout<<"------Book Details--------"<<endl;
            Publication::display_details();
            cout<<"Page count : "<<pages<<endl;
        }

        ~Book()
        {
            cout<<"Destructor for book called"<<endl;
        }

};

class Tape : protected Publication
{
    protected : 
        float playing_time ;
    
    public : 
        Tape()
        {
            playing_time = 0.0 ; 
        }

        void get_details()
        {
            try
            {
                cout<<"Enter tape details : "<<endl;
                Publication::get_details();
                if (price < 0 ) 
                {
                    string e = "Invalid value entered";
                    throw e;
                }
                cout<<"Enter playing time : ";
                cin>>playing_time;
                if (playing_time < 0 ) 
                {
                    string e = "Invalid value entered";
                    throw e;
                }
            }
            catch (string e)
            {
                cout<<e<<endl;
                price = 0 ;
                playing_time = 0 ;
            }
        }

        void display_details()
        {
            cout<<"----------Tape Details-----------"<<endl;
            Publication::display_details();
            cout<<"Playing time : "<<playing_time<<endl;
            cout<<"-------------------------------------------------"<<endl;
        }

        ~Tape()
        {
            cout<<"Destructor for tape called"<<endl;
        }
};

int main()
{
    Book b ;
    b.get_details();

    Tape t;
    t.get_details();

    b.display_details();
    t.display_details();

    return 0 ;
}