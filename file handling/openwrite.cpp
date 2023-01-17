#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream o ;
    o.open("myfile.txt");
    if (!o)
    {
        cout<<"erro while opening file"<<endl;
    }
    else
    {
        cout<<"file opened successfully"<<endl;
    }
    o<<"hello world"<<endl;
    o.close();

    return 0;
}