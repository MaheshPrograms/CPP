#include <iostream>
using namespace std;
int main ()
{
    // Numberic
    int normal_int = 3 ; 
    short int short_int = 6 ; 
    int long long_int = 2  ;
    int long long long_long_int = 5 ; 

    float float_var = 1.234 ;
    double double_var = 1.567 ;
    long double long_double_var = 6.98 ; 

    // character 
    char c = 'y' ;
    
    // boolean 
    bool flag = true ; 

    // finding sizes 
    cout<<sizeof(normal_int)<<endl; // 4
    cout<<sizeof(short_int)<<endl; // 2
    cout<<sizeof(long_int)<<endl;   // 4
    cout<<sizeof(long_long_int)<<endl; // 8

    cout<<sizeof(float_var)<<endl; // 4
    cout<<sizeof(double_var)<<endl; // 8 
    cout<<sizeof(long_double_var)<<endl; ///12

    cout<<sizeof(c)<<endl; // 1
    
    cout<<sizeof(flag)<<endl; // 1


    return 0;
}