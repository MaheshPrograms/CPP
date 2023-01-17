#include <iostream>
using namespace std;



int main ()
{
    int arr[10] = {1,2,3,4,5,6,7};
    
    int* ptr = &arr[0];

    for ( int i = 0 ; i < 7 ; i++)
    {
        cout<<*(ptr+i)<<endl;
    }

  
    return 0;
}