
#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {3,2,1,4,9,8,7,6,5};
    int largest = arr[0];
    int sec_largest = arr[0];

    for (int i = 0 ; i<9 ;i++) 
    {
        if (arr[i]>largest)
        {
            //sec_largest = largest;
            largest = arr[i];
        }
    }

 

    for (int i = 0 ; i<9 ; i++)
    {
        if (arr[i] != largest)

        {
            if (arr[i] > sec_largest)
            {
                sec_largest = arr[i];
            }
        }
    }

    cout<<sec_largest;
  
    return 0;
}