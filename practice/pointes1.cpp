
#include <iostream>
using namespace std;
int main ()
{
    int a = 7; //declaring variable and storing value 
    int *pointer; //declaring pointer

    pointer = &a ; //storing address of a in pointer

    cout<<"value of a using variable : "<<a<<endl;
    cout<<"Address of varible using &opertor : "<<&a<<endl;
    cout<<"Address of varible using pointer : "<<pointer<<endl;
    cout<<"value of varible using pointer : "<<*pointer<<endl;
    cout<<&pointer;

  
    return 0;
}