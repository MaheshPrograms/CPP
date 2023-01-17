#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b ;
    b = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = 0 ; j < n - i -1 ; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
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
    bubble_sort(arr,10);
    print_arr(arr,10);

    return 0;
}