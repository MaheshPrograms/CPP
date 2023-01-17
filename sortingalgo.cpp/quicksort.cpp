#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int partition (int arr[], int low, int high)
{
    if (low < high)
    {
        int i = low ;
        int j = high ;
        int pivot = arr[low];

        while (i<j)
        {
            while (arr[i] <= pivot)
            {
                if (i<high)
                {
                    i = i + 1;
                }
                else 
                {
                    break;
                }
            }

            while (arr[j] > pivot)
            {
                if(j>low)
                {
                    j = j - 1 ;
                }
                else 
                {
                    break;
                }
            }

            if (i<j)
            {
                swap(arr[i], arr[j]);
            }
            print_arr(arr,10);
            if (i==j)
            {
                cout<<low<<" "<<high<<endl;
                cout<<i<<j<<endl;
                print_arr(arr,10);
            }
        }
        swap(arr[low], arr[j]);
        
        return j ; 
    }
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quicksort(arr,low, pi-1);
        quicksort(arr, pi+1, high);
    }
}


int main()
{
    int arr[] = {9, 10, 8, 6, 7, 5, 4, 3, 2, 1};
    quicksort(arr, 0,9);
    print_arr(arr, 10);

    return 0;
}