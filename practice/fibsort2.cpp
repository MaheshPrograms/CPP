#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int elm = 7 ;
    int size = 10 ; 
    int fib_m2 = 0 ; 
    int fib_m1 = 1 ; 
    int fib_m = fib_m1 + fib_m2 ;

    while (fib_m < size)
    {
        fib_m2 = fib_m1;
        fib_m1 = fib_m ;
        fib_m = fib_m1 + fib_m2 ;
    }

    int start = 0 ;
    int end = size ; 
    int mid = fib_m2 ;
    cout<<fib_m<<endl; 

    while (fib_m >= 1)
    {
        //mid = start + mid ; 
        if (arr[mid] == elm)
        {
            cout<<"Element is at "<<mid<<endl ; 
            break; 
        }

        else if ( elm < arr[mid] )
        {
            fib_m = fib_m2 ;
            fib_m1 = fib_m1 - fib_m2 ;
            fib_m2 = fib_m - fib_m1 ; 
            mid = start + fib_m2;
        }

        else if ( elm > arr[mid])
        {
            start = mid ;
            fib_m = fib_m1 ;
            fib_m1 = fib_m2 ;
            fib_m2 = fib_m - fib_m1 ;
            mid = start + fib_m2 ;
        }

        else 
        {
            cout<<"Not found"<<endl; 
        }
    
    }
    //cout<<fib_m ; 
  
    return 0;
}