#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b ;
    b = temp;
}

void selection_sort(int arr[], int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[j]<arr[min_index])
            {
                min_index = j ;
            }
        }
        swap(arr[i], arr[min_index]);
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
    selection_sort(arr,10);
    print_arr(arr,10);

    return 0;
}