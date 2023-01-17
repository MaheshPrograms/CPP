#include <iostream>
using namespace std;
int main ()
{

  int arr[] = {6,4,1,3,2,9,8,5,7};

  int smallest = arr[0];
  int sec_smallest = arr[0];

  for (int i = 0 ; i < 9 ; i++)
  {
    if (arr[i] < smallest )
    {
        smallest = arr[i];
    }
  }

  for (int i = 0 ; i < 9 ; i++)
  {
    if (arr[i] != smallest)
    {
        if (arr[i]<sec_smallest)
        {
            sec_smallest = arr[i];
        }
    }
  }

  cout<<sec_smallest;
    return 0;
}