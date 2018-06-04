#include <iostream>
using namespace std;

int sum(int a,int b,int c=10);

int main(){
    int a,b;
    cout<<"Give two number: ";
    cin>>a>>b;
    int c=sum(a,b);
    cout<<"Sum of numbers is : "<<c<<endl;
    return 0;
}

int sum(int a,int b,int c){
    return a+b+c;
}
