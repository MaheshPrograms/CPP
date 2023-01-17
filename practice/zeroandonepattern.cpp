#include <iostream>
using namespace std;
int main ()
{
    int n ; 

    cout<<"Enter no of rows : "<<endl;
    cin>>n;
    int N = (n)*(n+1) / 2;
    int arr[N];
    cout<<N<<endl; 
    for ( int i = 0 ; i<N ; i++ )
    {
        if (i % 2 == 0 )
        {
            arr[i] = 0 ;
        }
        else 
        {
            arr[i] = 1 ;
        }
    }

    for ( int i = 0 ;i < n ; i++)
    {
        int m = i;
        int k = ((m*(m+1)/2));
        for (int j = (((i-1)*i)/2) ; j <= k ; j++)
        {
            cout<<arr[j];
        }
        cout<<endl;
    }
  
    return 0;
}