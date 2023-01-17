#include <iostream>
using namespace std;

class sample 
{
    public :
    static int x ;

    public :
    void update()
    {
        x++;
        cout<<x<<endl;
    }

};
int sample::x = 5;

int main ()
{
    sample s1,s2,s3,s4;
    s1.update();
    s2.update();
    s3.update();
    s4.update(); 

    cout<<s1.x<<endl;
  
    return 0;
}