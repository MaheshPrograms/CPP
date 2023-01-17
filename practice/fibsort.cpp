#include <iostream>
using namespace std;
int main ()
{

    int arr[] = {0,1,2,3,4,5,6,7,8,9,10};
    int n = 10 ; 
    int elm = 4 ;

    int fib_m2 = 0 ; 
    int fib_m1 = 1 ; 
    int fib_m = fib_m1 + fib_m2 ; 
    
    while(fib_m < n)
    {
        fib_m2 = fib_m1 ; 
        fib_m1 = fib_m; 
        fib_m = fib_m1 + fib_m2 ;         
    }

    cout<<fib_m<<endl;
    //int i = fib_m2;

    while (fib_m > 1 )
    {
        int i = fib_m2 ; 

        if (arr[i] > elm)
        {
            int temp = fib_m1 - fib_m2 ; 
            fib_m = fib_m2 ; 
            fib_m1 = temp ; 
            fib_m2 = fib_m - fib_m1 ;
        }

        else if (arr[i] == fib_m2)
        {
            cout<<"index is "<<i<<endl; 
            break;
        }
    }

    cout<<fib_m ; 
    

  
    return 0;
}