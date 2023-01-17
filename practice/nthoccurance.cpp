#include <iostream>
using namespace std;
int main ()
{
    int arr[] = {4,3,2,1,2,3,6,7,2,8,2};
    int element = 2 ;
    int count = 0;
    int index = 0 ;

   for (int i = 0 ; i< 11 ; i++)
   {
        if (arr[i] == element)
        {
            count = count + 1 ;
            index = i;
        }

        if (count == 3 ) 
        {
            break;
        }
        else 
        {
            continue;
        }
   }

   cout<<index;
    
  
    return 0;
}