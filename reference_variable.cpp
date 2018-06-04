#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number : ";
    cin>>a;
    cout<<"Number is : "<<a<<endl;
    int & num=a;
    cout<<"Enter number by reference: ";
    cin>>num;
    cout<<"Number is by reference: "<<num<<endl;
    return 0;
}
