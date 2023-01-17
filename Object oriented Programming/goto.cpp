#include <iostream>
using namespace std;
int main ()
{
    goto lbl;
    cout<<"hello world"<<endl; // this part is skipped 
    lbl:
    cout<<"skipped hello world"<<endl;


    return 0;
}