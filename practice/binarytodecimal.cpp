#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int binary = 101011;
    int n = binary ;
    int remainder1 ;
    int i = 0 ;
    int dec  = 0 ;
   
    while (n != 0 )
    {
        remainder1 = n % 10 ;
        dec = dec + remainder1 * pow(2,i);
        n = floor(n/10);
        i++;
    }
   
    cout<<dec ;
   
    return 0;
}