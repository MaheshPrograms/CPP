#include <iostream>
using namespace std;
template <typename T>
class sort{
    public:
    int n;
    T arr[];
    
    void input(){
        cout<<"Enter the number of elements in array";
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        cout<<"The unsorted array is:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    template <typename t>
    void swap1(t &a, t &b){ 
        
        t temp = a;
        a = b;
        b = temp;
    }

    template <typename t>
    void sort1(){
        int min;
        for(int i=0;i<n;i++){
            min = i;
            for(int j=i;j<n;j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }
            swap1 (arr[i], arr[min]);
        }
    }

    template <typename t>
    void display(){
        cout<<"The sorted array is:";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    } 
};
int main(){
    sort <float> obj;
    obj.input();
    obj.sort1<float>();
    obj.display<float>();
    return 0;
}