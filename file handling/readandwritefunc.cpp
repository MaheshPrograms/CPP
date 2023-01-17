#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("myfile.txt");
    out.write("hello",5);
    out.close();

    return 0 ;
}