#include <iostream>
using namespace std;

void modify_arr(int arr[], int size)
{
    for ( int i = 0 ; i< size ; i++)
    {
        (arr[i]) = 100;
    }
}



int main ()
{
    int arr[10] = {1,2,3,4,5,6,7};
    
    modify_arr((arr), 7);
    
    for (int i = 0 ; i<10 ; i++)
    {
        cout<<arr[i]<<endl;
    }


    //cout<<ptr;

  
    return 0;
}