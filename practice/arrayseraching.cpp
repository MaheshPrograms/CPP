#include <iostream>
using namespace std ;
int main ()
{

    int arr[10];

    int i = 0 ;

    for(int i = 0 ; i<10 ; i++)
    {
        cin>>arr[i];
    }
    int element ;

    cout<<"Enter element to be found : "<<endl;
    cin>>element;

    int index;

    for (int j = 0 ; j<10;j++)
    {
        if (arr[j]==element)
        {
            index = j ;
            break;
        }

        else{
            continue;
        }
    }

    cout<<index;
/*
    do {
        cin>>arr[i];
        i = i + 1; 
    }
    while(i<10);

    int element ;

    cin>>element;

    int j = 0 ;
    int index ;

    while (j<10)
    {
        if (arr[j]==element)
        {
            index = j;
            break;
        }
        else 
        {
            continue;
        }
    }

    cout<<index;
    */


    return 0 ;
}