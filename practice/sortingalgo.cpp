#include <iostream>
using namespace std;

void swap (int &a, int &b )
{
    int temp = a ;
    a = b ;
    b = temp;
}

int main ()
{
    int smallest = 23000;
    int arr[] = {5,2,3,1,7,9,8};
    int smallest_index = 0;

    for (int i = 0 ; i < 7; i++)
    {
        smallest = arr[i];
        smallest_index = i;
        for (int j = i ; j<7 ; j++)
        {
            if (arr[j]<smallest)
            {
                smallest = arr[j];
                smallest_index = j;

            }
            else 
            {
                continue;
            }
        }
        swap(arr[smallest_index], arr[i]);
    }

    for (int i = 0 ; i<7; i++)
    {
        cout<<arr[i]<<endl;
    }
  
    return 0;
}