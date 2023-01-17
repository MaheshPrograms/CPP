#include <iostream>
#include <string>
using namespace std ;

class publication
{
    protected : 
        string title ; 
        float price ;

    public : 
        publication(string title, float price)
        {
            try
            {
                this->title = title ;
                
                if (price < 0)
                {
                    this->price = 0 ;
                    string e = "Invalid value for price entered";
                    throw e ;
                }
                else
                {
                    this->price = price ; 
                }
            }
            catch (string e)
            {
                cout<<"ValueError : "<<e<<endl;
            }
        }

        void display_details()
        {
            cout<<"Title : "<<title<<endl;
            cout<<"price : "<<price<<endl;
        }

};

class book : protected publication 
{
    private : 
        int pages ;
    
    public : 
        book(string title, float price, int pages):publication(title, price)
        {
            try
            {
               if (pages < 0)
               {
                    this->pages = 0 ;
                    string e = "Pages cannot be negative";
                    throw e ;
               }

               this->pages = pages ;
            }
            catch(string e)
            {
                cout<<"ValueError : "<<e<<endl;
            }
            
                
        }

        void display_details()
        {
            publication::display_details();
            cout<<"Pages : "<<pages<<endl;
        }

};

class tape : protected publication 
{
    private : 
        float playing_time ;

    public : 
        tape(string title, float price, float playing_time):publication(title, price)
        {
            try
            {
                if (playing_time < 0 )
                {
                    this->playing_time = 0 ;
                    string e = "Playing time cannot be negative";
                    throw e;
                }
                this->playing_time = playing_time ;
            }
            catch (string e)
            {
                cout<<"ValueError : "<<e<<endl;
            }
        }

        void display_details()
        {
            publication::display_details();
            cout<<"Playing time : "<<playing_time<<endl;
        }

};

int main()
{
    
    return 0 ; 
}