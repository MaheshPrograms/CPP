#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b ;
    b = temp;
}

void insertion_sort(int arr[], int n)
{
    for(int i = 1 ; i < n ; i++)
    {
        for(int j = i ; j > 0 ; j--)
        {
            if (arr[j-1]>arr[j])
            {
                swap(arr[j], arr[j-1]);
            }
            else
            {
                break;
            }
        }
    }
}

void print_arr(int arr[], int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {9,10,8,6,7,5,4,3,2,1};
    insertion_sort(arr,10);
    print_arr(arr,10);

    return 0;
}