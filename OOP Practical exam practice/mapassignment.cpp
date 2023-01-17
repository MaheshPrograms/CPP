#include <iostream>
#include <map>

using namespace std ;

int main()
{
    int n ; 
    cout<<"Enter no of states you want to enter ";
    cin>>n ;

    map <string, int > data;

    cout<<"Enter state and corresponding population : "<<endl;
    for (int i = 0 ; i < n ; i++)
    {
        string state ;
        int population ; 
        cin>>state>>population;
        data[state] = population ;
    }
    cout<<"-------------------------------------------------------"<<endl;

    cout<<"Displaying State and Population : "<<endl;
    cout<<"State"<<"    "<<"Population"<<endl;
    map <string, int>:: iterator it = data.begin();
    while (it != data.end())
    {
        cout<<it->first<<"    "<<it->second<<endl;
        it++;
    }

    bool flag = true ;

    while (flag)
    {
        string state ;
        cout<<"Enter state you want population of "<<endl;
        cin>>state;
        cout<<state<<"  "<<data[state]<<endl;

        cout<<"Do you want to continue? [0/1]";
        cin>>flag;
    }

    cout<<"Thank you!"<<endl;
    
    return 0 ;
}