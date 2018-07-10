#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float number;
    cout<< "Enter number: ";
    cin>>number;

    cout<< "Set time : "<<endl;
    cout.setf(ios::showpoint);
    cout<<number<<endl;
    cout<<number<<endl;

    cout<< "Unset time : "<<endl;
    cout.unsetf(ios::showpoint);
    cout<<number<<endl;
    cout<<number<<endl;

    cout<< "Set time : "<<endl;
    cout<<setiosflags(ios::showpoint)<<number<<endl;
    cout<<number<<endl;

    cout<< "Unset time : "<<endl;
    cout<<resetiosflags(ios::showpoint)<<number<<endl;
    cout<<number<<endl;

    ios::fmtflags flag;
    flag=cout.flags();
    if(flag & ios::showbase) cout<<"Exist"<<endl;
    else cout<< "Not Exist"<<endl;

    return 0;
}
