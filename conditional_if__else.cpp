#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    if(a<10) cout<<"Number is less than 10"<<endl;
    else if(a<20) cout<<"Number is less than 20 and greater than 10"<<endl;
    else cout<<"Number is greater than 20"<<endl;
    return 0
}
