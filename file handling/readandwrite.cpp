#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("myfile.txt");
    string s1;
    cout<<"Enter string : "<<endl;
    cin>>s1;
    out<<s1;
    out.close();

    ifstream in;
    in.open("myfile.txt");
    while(in)
    {
        char c;
        c = in.get();
        cout<<c;
    }
    in.close();


    return 0;
}