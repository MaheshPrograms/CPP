#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;
    f.open("myfile.txt");
    while (f.good())
    {
        char c = f.get();
        cout<<c;
    }
    return 0;
}