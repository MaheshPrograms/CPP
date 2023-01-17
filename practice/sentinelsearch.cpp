#include <iostream>
#include <cmath>

using namespace std;

int main ()
{

    int arr[10] = {7,22,1,55,8,9,12,2,5,6};
    int elm = 6;
    int last = arr[9];
    arr[9] = elm ; 
    int i = 0 ; 
    while(arr[i]!=elm)
    {
        i++;
    }

    arr[9] = last;

    if (i<9 || last == elm )
    {
        cout<<"element is at "<<i<<endl;
    }

    else 
    {
        cout<<"Not found"<<endl;
    }

    return 0 ; 
    
}