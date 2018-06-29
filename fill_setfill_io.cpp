#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char name[]="Saiful Islam Rasel";

    /// fill()
    cout.width(20);
    cout<<name<<endl;

    cout.width(20);
    cout.fill('*');
    cout<<name<<endl;

    cout.width(20);
    cout<<name<<endl;

    cout.width(20);
    cout.fill(' ');
    cout<<name<<endl;

    /// setfill()
    cout<<setw(20)<<setfill('*')<<name<<endl;
    cout<<setw(20)<<setfill(' ')<<name<<endl;

    return 0;
}
