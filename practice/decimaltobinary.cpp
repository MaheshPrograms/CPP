#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int dec = 10 ;
    int n = dec ;
    int remainder ;
    int binary = 0 ;
    int i = 0 ;
   
    while ( n != 0 )
    {
        remainder = n % 2 ;
        binary = binary + remainder * pow(10, i);
        n = floor( n / 2) ;
        i++ ;
    }
   
    cout<<binary ;

    return 0;
}