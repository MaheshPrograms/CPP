#include <iostream>
#include <fstream>
using namespace std ;

int main()
{
    ofstream of ;
    of.open("myfile.txt");
    if (!of.is_open())
    {
        cout<<"File didnot open successfully"<<endl;
    }
    else
    {
        string line ;
        cout<<"Enter lines to write in file and -1 for stopping";
        getline(cin, line);
        while (line != "-1")
        {
            of<<line<<endl;
            getline(cin, line);
        }
    }
    of.close();

    ifstream f1 ;
    f1.open("myfile.txt");
    if (!f1.is_open())
    {
        cout<<"File didnot open successfully"<<endl;
    }
    else
    {
        string line ;
        while(getline(f1, line))
        {
            cout<<line<<endl;
        }
    }
    f1.close();

    return 0 ;
}