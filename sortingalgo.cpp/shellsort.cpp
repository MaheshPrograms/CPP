#include <iostream>
#include <cmath>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b ;
    b = temp;
}

void shell_sort(int arr[], int n)
{
    int gap = floor(n/2);
    while(gap>=1)
    {
        int i = gap;
        
        while ( i < n )
        {
            int j = i ;
            while (j-gap>=0)
            {
                cout<<j<<endl;
                if(arr[j]>arr[j-gap])
                {
                    break;
                }
                else
                {
                    swap(arr[j], arr[j-gap]);
                    j = j - gap;
                }               
            }
            i = i +1;
        }

        gap = floor(gap / 2);
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
    shell_sort(arr,10);
    print_arr(arr,10);

    return 0;
}