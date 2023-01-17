#include <iostream>
using namespace std;

int main ()
{
    int arr[10] = {1,2,3,4,5,6,7};
    
    int* ptr = new int(22);
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    float* ptr1 = new float (32.23);
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;

    delete ptr;
    delete ptr1;

    cout<<*ptr<<endl;
    cout<<*ptr1<<endl; 
    return 0;
}