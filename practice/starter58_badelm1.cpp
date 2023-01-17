#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {3,1,2,5,4,3,2,1,6,8,7,3,2,3,2,1,2} ;

    int max = 0 ; //let maximum frequency be 0

    int count ; 

    for( int i = 0  ; i < 17 ; i++) // checking count of each element in an array
    {
        count = 0 ; // before we start comparing initializing count to zero 
        for ( int j = 0 ; j < 17 ; j++)
        {
            if ( arr[j] == arr[i] )
            {
                count = count + 1 ; // increament count if element matches
            }
        }

        if ( count > max  )
        {
            max = count ; // if count of ith element is larger than previous highest count , then assign this count to max count 
        }
    }
    cout<<max ; 

    return 0;
}