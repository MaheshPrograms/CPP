#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {5,4,3,2,1,6,9,7,8} ;

    for (int i = 0 ; i < 8; i++)
    {
        if (arr[i]<arr[i+1])
        {
            cout<<i+1<<endl ;
            
        }

        else{
            continue;
        }
    }
  
    return 0;
}