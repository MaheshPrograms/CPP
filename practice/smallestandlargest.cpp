#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {7,3,4,5,6,2,1,9,8};
    int smallest = arr[0];
    int smallest_index = 0 ;
    int largest = arr[0];
    int largest_index = 0;

    for (int i = 0 ; i < 9 ; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
            largest_index = i;
        }

        if (arr[i]<smallest)
        {
            smallest = arr[i];
            smallest_index = i;
        }
    }

    cout<<"Smallest : "<<smallest<<endl;
    cout<<"largest : "<<largest<<endl;
  
    return 0;
}