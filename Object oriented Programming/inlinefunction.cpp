#include <iostream>
using namespace std;

class display
{
    public:
    inline void hello()
    {
        cout<<"hello world"<<endl;
    }
};

int main ()
{
    display show ;
    show.hello();
  
    return 0;
}