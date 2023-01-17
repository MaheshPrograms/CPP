#include <iostream>
#include <fstream>
#include <ios>
using namespace std ; 

int main()
{
    ofstream obj ; 
    obj.open("myfile.txt", ios::in);
    obj << "writing this to file"<<endl;
    char c;
    obj.put('p');
    obj.close();

    return 0 ; 
}
