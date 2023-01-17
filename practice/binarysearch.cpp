#include <iostream>
#include<math.h>
using namespace std;
int main ()
{

    cout<<"hello world"<<endl;
    int arr[] = {1,2,3,4,6,7,9,11,12,45,67,89,110}; 
              //{0,1,2,3,4,5,6,7 ,8 ,9 ,10,11,12 ,13 ,14}
    //8

    int start = 0;
    int end = 12;
    int mid = floor((start + end)/2);
    int element = 9;
    bool flag = false;

    while(flag == false)
    {
        cout<<"start: " <<start<<endl;
        cout<<"end : "<<end<<endl;
        cout<<"Mid : "<<mid<<endl;
        cout<<"--------------------------------"<<endl;

        if (element<arr[mid])
        {
            end = mid ;
            start = start ;
            mid = floor((start + end) / 2);
            continue;
        }

        else if (element > arr[mid])
        {
            start = mid ;
            end = end;
            mid = floor((start + end)/2);
            continue;
        }

        else
        {
            flag = true;
            break;

        }
        
    };

    cout<<mid;
    return 0;
}