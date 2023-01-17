#include <iostream>

using namespace std;

int get_smallest_index(int arr[], int size )
{
    int long smallest = 99999;
    int smallest_no_index;
    for (int i = 0 ; i<size ; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
            smallest_no_index = i;
        }

        else 
        {
            continue;
        }
    }
    return smallest_no_index;
}

int get_largest (int arr[], int size )
{
    int largest = -32000;

    for (int i = 0 ; i < size ; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }

        else 
        {
            continue;
        }


    }
}

int main ()
{
    int size ;
    cout<<"Enter array size : "<<endl;
    cin>>size;

    int arr[size];

    for (int i = 0 ; i < size ; i++ )
    {
        cin>>arr[i];
    }

    int largest = get_largest(arr, size);
    cout<<largest<<endl;

    int sorted_array[size];

    cout<<get_smallest_index(arr, size)<<endl;

    int smallest_no_index, smallest_no;


    for (int j = 0 ; j < size ; j++)
    {

        smallest_no_index = get_smallest_index(arr, size) ;
        smallest_no = arr[smallest_no_index];
        sorted_array[j] = smallest_no;
        arr[smallest_no_index] = largest + 1;
    }

    for (int k = 0 ; k<size ; k++)
    {
        cout<<sorted_array[k]<<endl;
    }

    

}