#include <iostream>
using namespace std;

void swap1 ( int &a, int &b)
{
    int temp = a; 
    a = b; 
    b = temp; 
}

void selection_sort ( int arr[], int size)
{
    for ( int i = 0 ; i < size ; i++)
    {
        int min_index = i ;
        for ( int j = i ; j < size ; j++)
        {
            if ( arr[j] < arr[min_index] )
            {
                min_index = j ; 
            }
        }

        swap1( arr[i], arr[min_index] );
    }

}

int main ()
{
     
    int arr[] = {3,1,2,5,4,3,2,1,6,8,7,3,2,3,2,1,2} ;

    selection_sort(arr, 17) ;

    int count = 1 ; 
    int max = 0 ;
    for ( int i = 0 ; i < 17 ; i++)
    {
        if ( arr[i] == arr[i+1] )
        {
            count++ ; 
        }

        else 
        {
            if ( count > max )
            {
                max = count ; 
            }
            count = 1 ; 
        }
    }

    cout<<max ; 
  
    return 0;
}