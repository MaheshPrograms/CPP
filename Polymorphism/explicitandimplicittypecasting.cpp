#include <iostream>
using namespace std;

int main()
{
    int a = 7.8 ; // implicit typecasting
    // 7 will be stored in a instead of 7.8 
    cout<<a<<endl;

    float x = 7/4;
    cout<<x<<endl;
    // above operation performs floor division 
    // ans is 1.75 but 1 is stored in x 
    // so we have to explicitly assign float value to variable

    float y = (float)7/4;//explicit typecasting
    cout<<y<<endl;
}