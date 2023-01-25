#include <iostream>
using namespace std ;

int main()
{
    int * arr ;
    
    for(int i = 0 ; i < 5 ; i++)
    {
        // cin>>*(arr+i);// this does not work
        // cin>>arr[i]; this also does not work
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<*(arr+i);
    }

    return 0;
}