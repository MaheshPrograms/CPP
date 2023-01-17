#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {4,1,2,3,8,9,7,6,5};
    int rev_arr[9];

    for (int i = 0 ; i<9; i++)
    {
        rev_arr[i] = arr[9-i-1];
    }

    for ( int i = 0 ; i<9 ; i++)
    {
        cout<<rev_arr[i]<<endl;
    }

  
    return 0;
}