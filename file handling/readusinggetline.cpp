#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream f;
    char a[80];
    f.open("myfile.txt");
    string s;
    do
    {
        getline(f,s);
        cout<<s<<endl; 
    }while (getline(f,s));
    // getline(f,s);
    // cout<<s;
    return 0;
}