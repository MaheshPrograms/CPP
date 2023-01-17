#include <iostream>
using namespace std;

void swap1(int &a , int &b )
{
    int temp = a; 
    a = b ; 
    b = temp ; 
}

int main ()
{

    int arr[] = {3,6,5,4,1,3,2,9,8,0};

    for (int i = 0 ; i < 10 ; i++)
    {
        int min = arr[i] ;
        int min_index = i ; 
        for(int j = i ; j < 10 ; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j] ;
                min_index = j ; 
            }
        }
        swap1(arr[i], arr[min_index]);
    }

    for ( int i = 0 ; i < 10 ; i++)
    {
        cout<<arr[i]<<endl;
    }
      
  
    return 0;
}