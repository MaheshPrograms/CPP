#include <iostream>
using namespace std;

void swap1(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int arr[] = {5, 1, 4, 3, 2, 8, 7, 9, 6, 0};

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap1(arr[j], arr[j + 1]) ;
            }
        }
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}