#include <iostream>
using namespace std ;

template <typename t>
void swap( t &x , t &y)
{
    t temp = x ;
    x = y ;
    y = temp ;
}

template <typename t>
void selection_sort(t arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        t min = arr[i];
        int min_index = i ;
        for( int j = i ; j < n ; j++ )
        {
            if (arr[j] < min)
            {
                min = arr[j];
                min_index = j ;
            }
        }
        t temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp ;
    }
}

template <typename t>
void display_array(t arr[], int n)
{
    for(int i = 0  ; i < n ; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}

void display_menu()
{
    cout<<"-------MENU---------"<<endl;
    cout<<"1.Integer array"<<endl;
    cout<<"2.Float array"<<endl;
    cout<<"3.Character array"<<endl;
    cout<<"0.Exit"<<endl;
}


int main()
{
    bool flag = true ;

    while(flag)
    {
        display_menu();
        int code ;
        cout<<"Enter choice code : "<<endl;
        cin>>code ;

        switch(code)
        {
            case 1 :
            {
                int n ;
                cout<<"Enter no of elements in an array : "<<endl;
                cin>>n;
                int arr[n];
                cout<<"Enter elements of an array"<<endl;
                for (int i = 0 ; i < n ; i++)
                {
                    cin>>arr[i];
                }
                selection_sort(arr, n);
                display_array(arr, n);
                break;
            }

            case 2 :
            {
                int n ;
                cout<<"Enter no of elements in an array : "<<endl;
                cin>>n;
                float arr[n];
                cout<<"Enter elements of an array"<<endl;
                for (int i = 0 ; i < n ; i++)
                {
                    cin>>arr[i];
                }
                selection_sort(arr, n);
                display_array(arr, n);
                break;
            }

            case 3 :
            {
                int n ;
                cout<<"Enter no of elements in an array : "<<endl;
                cin>>n;
                char arr[n];
                cout<<"Enter elements of an array"<<endl;
                for (int i = 0 ; i < n ; i++)
                {
                    cin>>arr[i];
                }
                selection_sort(arr, n);
                display_array(arr, n);
                break;
            }

            case 0:
            {
                flag = false ;
                cout<<"Thank you!"<<endl;
                break;
            }
        
            default :
            {
                cout<<"Invalid code ";
            }
        }

    }
    return 0 ;
}