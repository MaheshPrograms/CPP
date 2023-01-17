#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10 ;
    int start = 0;
    int end = n-1 ; 
    int mid = (start + end) / 2 ;
    int elm = 1 ;
    int index ;

    bool flag = false ;

    while(flag == false )
    {
        if (arr[mid] == elm)
        {
            index = mid ; 
            cout<<"element is at "<<index<<endl;
            flag = false ; 
            break ;
        }

        else if (elm < arr[mid])
        {
            start = start ; 
            end = mid ; 
            mid = (start + end) / 2 ;
        }

        else 
        {
            start = mid ;
            end = end ; 
            mid = (start + end) / 2 ; 
        }
    }

  
    return 0;
}