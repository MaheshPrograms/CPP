#include <iostream>
using namespace std;

void swap(int &a, int &b )
{
    int temp = a ;
    a = b ;
    b = temp;   
}

int smallest ;
int smallest_index;

int main ()
{
    int arr[] = {6,4,5,1,2,3,9,7,8};

    for (int i = 0 ; i<9 ; i++)
    {
        smallest = arr[i];
        smallest_index = i;

        for (int j = i ; j< 9; j++ )
        {
            if (arr[j]<smallest)
            {
                smallest = arr[j];
                smallest_index = j ;
            }
        }

        swap(arr[i], arr[smallest_index]);
        
    }

    for (int i = 0 ; i<9 ; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}