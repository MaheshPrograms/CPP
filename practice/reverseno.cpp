#include <iostream>
#include <cmath>
using namespace std;

int main() {
 
    int num = 5487;
    int remainder = 0 ;
    int n = num ;
    int remainders ;
    int count = 0 ;
    int new_num = 0 ;
   
    while (n != 0 )
    {
    n = floor(n/10);
   
    count++;
    }

cout<<count<<endl ;

for( int i = 0 ; i < count ; i++)
{
remainder = num % 10 ;
new_num = new_num + remainder * pow(10, count-i-1);
num = floor(num/10);
}

cout<<new_num ;  
    return 0;
}