
#include <iostream>

using namespace std ;

int get_smallest (int arr[], int size )
{
    int long smallest = 99999999999;

    for (int i = 0 ; i < size ; i++ )
    {
        if ( arr[i] < smallest )
        {
            smallest = arr[i];
        }

        else 
        {
            continue;
        }
    }

    return smallest;
}

int get_largest_index (int arr[], int size )
{
    int largest = -32000;
    int largest_index = -32000;
    for (int i = 0 ; i < size ; i++){
        if (arr[i]>largest)
        {
            largest = arr[i];
            largest_index = i ;
        }

        else 
        {
            continue;
        }
    }

    return largest_index;

}



int main ()
{

    int size ;
    cout<<"Enter array size : ";
    cin>>size;
    int arr[size];

    for (int i = 0  ; i < size ; i ++)
    {
        cin>>arr[i];
    }

    int smallest_elm = get_smallest(arr, size);
    int sorted_arr[size];
    int largest_index, largest_element  ;

    for (int j = 0 ; j < size ; j++)
    {
        largest_index = get_largest_index(arr, size);
        largest_element = arr[largest_index];
        sorted_arr[j] = largest_element;
        arr[largest_index] = smallest_elm - 1;
    }

    for( int k = 0 ; k < size ; k++)
    {
        cout<<sorted_arr[k]<<endl;
    }

    return 0 ;
}