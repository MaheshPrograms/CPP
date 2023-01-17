#include <iostream>
using namespace std;

int main ()
{
    int arr[] = {2,5,3,1,2,5,2,1,1};

    int* ptr = arr;

    int k = 3;
    int el = 2;

    int count = 0 ;

    for ( int i = 0 ; i < 9 ; i++)
    {
        if (arr[i] == el)
        {
            count = count + 1 ; 
        }

        if (count == k )
        {
            cout<<i<<endl;
            break ;
        }
    } 


  
    return 0;
}