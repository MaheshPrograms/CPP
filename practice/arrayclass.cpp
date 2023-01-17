#include <iostream>
using namespace std;

class arrays
{
    int size ; 
    int arr[];

    public : 
    arrays(int size)
    {
        this-> size = size ; 
    }

    void make_array()
    {
        cout<<"Enter array elements one by one : "<<endl;
        for (int i = 0 ; i < size ; i++)
        {
            cin>>arr[i];
        }
    }

    void display_arr()
    {
        for(int i = 0 ; i < size ; i++)
        cout<<arr[i]<<endl;
    }

    friend ostream & operator<< (ostream &out, arrays &a );
};
ostream & operator<< (ostream &out, arrays &a )
{
    for (int i = 0 ; i < a.size ; i++)
    {
        cout<<a.arr[i]<<endl;
    }
}


int main ()
{
     
    arrays a(7);
    a.make_array();
    a.display_arr();
    cout<<a;
  
    return 0;
}