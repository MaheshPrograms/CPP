#include <iostream>
#include <string>
using namespace std;

class Publication 
{
    protected : 
        string title ;
        float price ; 

    public : 

        Publication(string title, float price)
        {
            this -> title = title ;
            this -> price = price ;
        }

        

        void display()
        {
            cout<<"Title : "<<title<<endl;
            cout<<"Price : "<<price<<endl;
        }

};

class Book : public Publication
{
    private : 
        int page ;

    public : 
        Book(int page, string title, float price):Publication(title, price)
        {
            this -> page = page ;
        }

        void display()
        {
            Publication::display();
            cout<<"Pages : "<<page<<endl;
        }
};

class Tape : public Publication
{
    private : 
        float playing_time ; 

    public :
        Tape(float playing_time, string title, float price):Publication(title,price)
        {
            this -> playing_time = playing_time ;
        }

        void display()
        {
            Publication::display();
            cout<<"Playing time : "<<playing_time<<endl;
        }
};

int main ()
{
    Book b(40,"hello", 89.63) ;
    b.display();
    b.Publication::display();
  
    return 0;
}