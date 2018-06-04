#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    switch(a){
    case 1:
        cout<<"Number is 1"<<endl;
        break;
    case 5:
        cout<<"Number is 5"<<endl;
        break;
    default:
        cout<<"Number is greater than "<<endl;
    }
    return 0
}
