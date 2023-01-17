
#include <iostream>
using namespace std;

int fact (int n )
{
    int i = 1 ;
    int f = 1 ;

    for (int i = 1; i<=n ; i++)
    {
        f = f *i;
    }

    return f ;

}

int get_permutations(int n,int r)
{
    int C = fact(n)/fact(n-r);

    return C;

}


int main()
{

    int no_of_steps;

    cout << "Enter no of steps : " << endl;
    cin >> no_of_steps;

    // Let x times man takes two steps
    // y times he takes one step
    // 2x + y = no_of_steps
    // y = no_of_steps - 2x

    int y;
    int i = 0;
    int no_of_ways = 0;
    if (no_of_steps > 0)
    {
        while (y >= 0)
        {
            y = no_of_steps - 2 * i;

            if (y>=0)
            {
            no_of_ways = no_of_ways + get_permutations(i+y,i);
            }

            i ++;
        }

        cout<<no_of_ways<<endl;

    }
    else 
    {
        cout<<0<<endl;
    }

    
    return 0;
}