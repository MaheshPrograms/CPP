#include <iostream>
using namespace std;
int main ()
{
    int sum = 0 ;

    int n = 10 ;

    for ( int i = 1 ; i <= n ; i++)
    {
        sum = sum + i ;
    }

    cout<<sum<<endl;

    int count = 1 ;

    for (int i = 1 ; i <= 5 ; i++)
    {
        for ( int j = count ; j < i + count ; j++ )
        {
            cout<<j<<" ";
        }

        count= count+i;
        cout<<endl;
    }
      

    int n1 = 6 ;
    int N = n1 * (n1+1) / 2 ;

    int arr[N+1];

    for ( int i = 1 ; i <= N ; i++ )
    {
        if ( i % 2 == 0 )
        {
            arr[i] = 1 ;
        }

        else 
        {
            arr[i] = 0 ;
        }
    }

    int count1 = 1 ;

    for ( int i = 1 ; i <= n1 ; i++)
    {
        for ( int j = count1 ; j < count1 + i ; j ++)
        {
            cout<<arr[j]<<" ";
        }
        count1 = count1 + i ;
        cout<<endl;
    }

    return 0;
}