#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {4,3,2,1,2,3,6,7,8};
    int element = 7;

    for (int i = 0 ; i < 9 ; i++)
    {
        if (arr[i] == element)
        {
            cout<<"At index : "<<i;
            break;
        }

        else 
        {
            continue;
        }
    }
  
    return 0;
}