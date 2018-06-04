#include <iostream>
using namespace std;

int main(){
    class myclass{
        int data;
    public:
        void set(int n) {data=n;}
        void get() {cout<<"Data is : "<<data<<endl;}

    };
    int num;
    myclass a;
    cout<<"Enter data: ";
    cin>>num;
    a.set(num);
    a.get();
    return 0;
}
