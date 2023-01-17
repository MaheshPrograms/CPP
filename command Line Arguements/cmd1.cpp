#include <iostream>
using namespace std;
// main function accepts an arguements while running program on command line
// it accepts two commands 
// 1. argc: No of elements to be stored in array
// 2. argv : array of pointers to characters
// (any name can be used instead of argc and argv)
int main(int argc, char* argv[])
{
    cout<<"hello world"<<endl;

    for (int i = 0 ; i < argc ;i++)
    {
        cout<<argv[i]<<endl;
    }

    cout<<argv[0]<<endl;

    return 0;
}

// we save any cpp file with .cpp extension
// we compile it using g++ filename.cpp
// this generates corresponding object file
// we run this object file using a or ./a
// we we run this file, using a, at that time we can pass commandline arguements
// to the main function
// by default first arguement of argv array is name or path of object file
// syntax to pass command line arguement is ./a commands

// If we pass a hello world, then elements of argv will be a, hello, world
// but if we want to pass hello world as continuous string, we can write a "hello world"
