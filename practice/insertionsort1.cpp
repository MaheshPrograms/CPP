#include <iostream>
using namespace std;

void swap1 (int &a, int &b)
{
    int temp = a ; 
    a = b ; 
    b = temp ;
}

int main ()
{
    int arr[] = {5,4,1,3,2,8,6,7,9,0};

    for(int i = 1 ; i < 10 ; i++)
    {
        for(int j = i ; j > 0 ; j--)
        {
            if ( arr[j-1] > arr[j])
            {
                swap1(arr[j-1], arr[j]) ;
            }

            else 
            {
                break ; 
            }
        }
    } 

    for ( int i = 0 ; i < 10 ; i++)
    {
        cout<<arr[i]<<endl;
    }
  
    return 0;
}