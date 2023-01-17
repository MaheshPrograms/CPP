#include <iostream>
using namespace std;

int main(){
    int i,j,k;

    for(i=1;i<=4;i++){
        for(j=4;j>=i;j--){
            cout<<"  ";
        }
        for(k=i;k>0;k--){
            cout<<" *  ";
        }
        
            cout<<endl;  
    }
    return 0;
}