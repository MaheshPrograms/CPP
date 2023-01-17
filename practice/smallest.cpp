#include <iostream>


using namespace std;

int main ()
{
    int smallest;
    int n ;
   

    cout<<"Enter size of an array : ";
    cin>>n;

     int arr[n] ;

    cout<<"Enter array elements ";

    for (int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];

        if (arr[i]<smallest) 
        {
            smallest = arr[i] ;
        }

    }

    cout<<"Smallest Number is "<<smallest;

    return 0 ;
    
}