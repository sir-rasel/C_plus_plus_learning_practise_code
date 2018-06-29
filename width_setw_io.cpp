#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    char name[30];

    cout<< "Enter name: ";
    cin.getline(name,sizeof(name));
    cout.width(15);
    cout<< "Name is : "<<endl;
    cout.width(20);
    cout<<name<<endl;

    cout<< "Enter name: ";
    cin.getline(name,sizeof(name));
    cout<<setw(15)<<"Name is : "<<endl;
    cout<<setw(20)<<name<<endl;

    return 0;
}
