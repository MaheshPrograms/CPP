#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string name_to_find;
struct record
{
    string name ;
    string DOB;
    int phone;   
};

bool comp_by_name(record r1, record r2)
{
    return r1.name < r2.name;
}

bool comp_by_DOB(record r1, record r2)
{
    return r1.DOB < r2.DOB;
}

bool comp_by_phone(record r1, record r2)
{
    return r1.phone < r2.phone;
}

bool find_by_name(record r)
{
    return (r.name == name_to_find);
}

int main()
{
    vector <record> v;
    int n = 3 ;
    for(int i = 0 ; i< n ; i++)
    {
        record r ;
        cin>>r.name;
        cin>>r.DOB;
        cin>>r.phone;
        v.push_back(r);
    }

    sort(v.begin(), v.end(), comp_by_name);
    cout<<"Sorted by Names : "<<endl;
    for (int i = 0 ; i<n;i++)
    {
        cout<<v[i].name<<endl;
        cout<<v[i].DOB<<endl;
        cout<<v[i].phone<<endl;
    }

    name_to_find = "a";

    vector <record> :: iterator it = std::find_if(v.begin(), v.end(), find_by_name);
    cout<<it->name;
  
    return 0 ;
}