#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {5,3,5,6,1,3,6,7,8,1,9};
    int* ptr = arr  ;

    int largest_index = 0 ;

    for ( int i = 0 ; i <= 10 ; i++)
    {
        if ((*(ptr+i)) > arr[largest_index])
        {
            largest_index = i ; 
        }

        else 
        {
            continue;
        }
    }

    cout<<arr[largest_index]<<endl;
    return 0;
}