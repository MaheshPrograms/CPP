#include <iostream>
using namespace std;

struct node 
{
    int data ; 
    node * address ;
};

int main ()
{
    node * p ;
    p = new node();

    for( int i = 0 ; i < 5 ; i++ )
    {
        (p+i) -> data = i ;
        
        if ( i != 4 )
        {
            (p+i) -> address = p+i+1 ;
        }

        else 
        {
            (p+i) -> address = NULL ;
        }
    }   

    for ( int i = 0 ; i < 5 ; i++ )
    {
        cout<<(p+i)->data<<endl;
        cout<<(p+i)->address<<endl;
        cout<<"--------------------------"<<endl;
    }
  
    return 0;
}