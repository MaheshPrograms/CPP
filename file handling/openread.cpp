#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f;
    f.open("myfile.txt");
    char c;
    while (f)
    {
        f>>c; // reading one by one character from string
        cout<<c;    
    }
    f.close();
    return 0;
}