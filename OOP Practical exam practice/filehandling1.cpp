#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // output operation
    ofstream f ;
    f.open("myfile.txt");
    if (!f.is_open())
    {
        cout<<"File did not open successfully"<<endl;
    }
    else
    {
        string to_write;
        cout<<"Enter content to write on file and write -1 to stop "<<endl;
        getline(cin, to_write);
        while(to_write != "-1")
        {
            f<<to_write<<endl;
            getline(cin, to_write);
        }
    }
    f.close();

    // input opertion from file
    ifstream f1 ;
    f1.open("myfile.txt");
    if (!f1.is_open())
    {
        cout<<"File did not open successfully"<<endl;
    }
    else 
    {
        string line ; 
        while (getline(f1, line))
        {
            cout<<line<<endl;
        }
    }
    f1.close();


    return 0 ;
}